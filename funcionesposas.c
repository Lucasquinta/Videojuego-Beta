#include <stdio.h>
#include "libreria.h"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define MAGENTA "\033[1;35m"
#define YELLOW  "\033[1;33m"
#define RED     "\033[1;31m"

//Creo la funcion de las esposas, que nos va a indicar que al utilizarla, se salta el turno del usuario
void esposas(struct xd* x) {
    printf(GREEN"Has usado las esposas\n"RESET);
    x->cpuv = 5;
        //Agrego 5 vidas al usuario
        x->jugadorv = 5;
        //Agrego el daño que sera por partida de 1 vida
        x->dano = 1;
    while(1){
            if (x->cpuv == 0) {
                printf(MAGENTA"El rival ha muerto ¡has ganado!\n"RESET);
                break;
            } else if (x->jugadorv == 0) {
                printf(MAGENTA"\t¡Has perdido!\n"RESET);
                break;
            }
        break;
    }

            //Hago un if que indica que si el objeto es distinto a 2, nos va         a indicar si queremos disparar a nostoros o al rival 
            if (x->objeto == 2) { 
                printf(MAGENTA"\n\n¿Quieres dispararle al rival(1) o a ti mismo(2)?\n"RESET);
                scanf("%d", &x->jugador);
                //Hago un if que indica que si el jugador presiona 1 le                     dispara al rival
                if (x->jugador == 1) {
                    printf(RED"Le disparaste al rival\n"RESET);
                    //Hago otro if dentro que indica que si la bala es                         verdadera le disminuye las vidas al rival
                    if (x->bala == 1) {
                        x->cpuv -= x->dano;
                        printf(CYAN"La bala es verdadera\n"RESET, x->cpuv);
                        x->dano = 1;
                        //Agrego el else que indica que de lo contrario la                         bala es falsa y no quita ningun daño
                    } else {
                        printf(CYAN"La bala es falsa\n"RESET);
                        x->dano = 1;
                    }
                //Creo otro if que indica que si el jugador presiona el 2                   se va a disparar a si mismo con la pistola
                } else if (x->jugador == 2) {
                    printf(RED"Te disparaste a ti mismo\n"RESET);
                    //Agrego dentro del if, que si la bala es 1, sera                         verdadera y nos disminuira la via
                    if (x->bala == 1) {
                        x->jugadorv -= x->dano;
                        printf(CYAN"La bala es verdadera\n"RESET, x->jugadorv);
                        x->dano = 1;
                    //Agrego que de lo contrario la bala sera falsa y la vida                 seguira igual
                    } else {
                        printf(CYAN"La bala es falsa\n"RESET);
                        x->dano = 1;
                    }
                }
            }
    while(1){      
    //Creo un if que indica que si las vidas del rival son 0, se                acaba el juego y ganamos 
            if (x->cpuv == 0) {
                printf(MAGENTA"El rival ha muerto ¡has ganado!\n"RESET);
                break;
            //De lo contrario creo otro if que indica que si las vidas del                 jugador son 0, se acaba el juego y perdimos
            } else if (x->jugadorv == 0) {
                printf(MAGENTA"Has muerto\n"RESET);
                break;
            }
        break;
    }
    }
