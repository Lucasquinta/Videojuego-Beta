#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "colores.h"
#include "libreria.h"

//Creo la funcion
void juego() {
    //Llamo al struct
    struct xd x;
    //Agrego 5 vidas al rival
    x.cpuv = 5;
    //Agrego 5 vidas al usuario
    x.jugadorv = 5;
    //Agrego el daño que sera por partida de 1 vida
    x.dano = 1;
    int lupa_usada = 0;

    while (1) {
        if (x.cpuv <= 0) {
            tablero(x);
            printf(MAGENTA"El rival murió ¡has ganado!\n"RESET);
            break;
        } else if (x.jugadorv <= 0) {
            tablero(x);
            printf(MAGENTA"\t¡Has perdido!\n"RESET);
            break;
        }

        if (!lupa_usada) {
            x.bala = rand() % 2;
        }
        //Hago un puntero que llama a una variable que esta en el struct         de la funcion de objetos
        objetos(&x);
        //Hago un if que nos indica que si el objeto es igual a 3, va a             utilizar la lupa
        if (x.objeto == 3) { // Si se usa la lupa
            //Llamo a la funcion lupa con sus respectivas variables
            lupa(&x);
            lupa_usada = 1;
        } else {
            lupa_usada = 0;
        }
        //Hago un if que indica que si el objeto es distinto a 2, nos va         a indicar si queremos disparar a nostoros o al rival 
        if (x.objeto != 2) {
            do{
                printf(MAGENTA"\n\n¿Quieres dispararle al rival(1) o a ti mismo(2)?\n"RESET);
                if (scanf("%d", &x.jugador) != 1 || x.jugador > 3){
                        limpiarCarga();
                        printf(MAGENTA"\nOpcion invalida, ingrese una opcion valida.\n"RESET);
                    while (getchar() != '\n');
                } else {
                    break;
                }
            } while (1);
            //Hago un if que indica que si el jugador presiona 1 le                     dispara al rival
            if (x.jugador == 1) {
                printf(RED"Le disparaste al rival\n"RESET);
                //Hago otro if dentro que indica que si la bala es                         verdadera le disminuye las vidas al rival
                if (x.bala == 1) {
                    x.cpuv -= x.dano;
                    printf(CYAN"La bala es verdadera\n"RESET, x.cpuv);
                    x.dano = 1;
                    //Agrego el else que indica que de lo contrario la                         bala es falsa y no quita ningun daño
                } else {
                    printf(CYAN"La bala es falsa\n"RESET);
                    x.dano = 1;
                }
                //Llamo a la funcion del rival, con sus variables que va                    a hacer lo mismo que nosotros pero con comandos de su                     funcion, para moverse
                rival(&x);
            //Creo otro if que indica que si el jugador presiona el 2                   se va a disparar a si mismo con la pistola
            } else if (x.jugador == 2) {
                printf(RED"Te disparaste a ti mismo\n"RESET);
                //Agrego dentro del if, que si la bala es 1, sera                         verdadera y nos disminuira la via
                if (x.bala == 1) {
                    x.jugadorv -= x.dano;
                    printf(CYAN"La bala es verdadera\n"RESET, x.jugadorv);
                    x.dano = 1;
                    juego();
                //Agrego que de lo contrario la bala sera falsa y la vida                 seguira igual
                } else {
                    printf(CYAN"La bala es falsa\n"RESET);
                    x.dano = 1;
                    juego();
                }
                //Llamo la funcion del rival, con sus variables que van                    a hacer lo mismo que nosotros
                rival(&x);
            }
        }
        //Creo un if que indica que si las vidas del rival son 0, se                acaba el juego y ganamos 
        if (x.cpuv <= 0) {
            tablero(x);
            printf(MAGENTA"El rival ha muerto ¡has ganado!\n"RESET);
            break;
        //De lo contrario creo otro if que indica que si las vidas del                 jugador son 0, se acaba el juego y perdimos
        } else if (x.jugadorv <= 0) {
            tablero(x);
            printf(MAGENTA"Has muerto\n"RESET);
            break;
        }
    }
}
