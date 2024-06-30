#include <stdio.h>
#include "libreria.h"
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define MAGENTA   "\033[1;35m"
#define CYAN    "\033[1;36m"
#define YELLOW  "\033[1;33m"
#define RED     "\033[1;31m"
//Creo la funcion que contendra los movimientos del rival, con el struct y sus respectivas variables
void rival(struct xd* x) {
    printf(YELLOW"Esperando a tu rival...\n"RESET);
    printf(YELLOW".\n"RESET);
    printf(YELLOW".\n"RESET);
    printf(YELLOW".\n"RESET);
    //Agrego un puntero a la variable de la bala, la cual va a ser             1(verdadera), o 2(Falsa)
    x->bala = rand() % 2;  
    //Y hago lo mismo con las vidas, que seran 5, pero va a disminuir         dependiendo de las balas
    x->cpu = rand() % 5; 
    //Creo un if que indica que si el rival se dispara a si mismo y la         bala es verdadera, se le descuenta una vida
    if (x->cpu == 0) {
        printf(RED"Tu rival se ha disparado a sí mismo\n"RESET);
        //Creo un if que indica que si la bala es verdadera, se le                descuenta una vida al rival
        if (x->bala == 1) {
            x->jugadorv -= x->dano;
            printf(CYAN"La bala es verdadera\n"RESET);
        } 
        //De lo contrario agrego un else que indica que la bala es falsa
        else {
            printf(CYAN"La bala es falsa"RESET);
        }
    } 
    //Agrego un else al primer if, que indica que si el rival no eligio         la primer opcion, la bala decidio tirarsela al usuario
    else {
        printf(RED"Tu rival te disparó\n"RESET);
        //Agrego un if dentro del else, que indica que si la bala es 1,           es verdadera, se le descuenta una vida al usuario
        if (x->bala == 1) {
            x->jugadorv -= x->dano;
            printf(CYAN"La bala es verdadera\n"RESET);
        } 
        //De lo contrario agrego un else en el else, que la bala es falsa
        else {
            printf(CYAN"La bala es falsa\n"RESET);
        }
    }

    // Mostrar el estado actual de vida del rival y del jugador
    printf(MAGENTA"Le quedan %d vidas a tu rival\n"RESET, x->cpuv);
    printf(GREEN"Te quedan %d vidas\n"RESET, x->jugadorv);
    //Creo un if que indica que si el rival llega a 0 vidas, se le             muestra un mensaje de que murio, perdio, gano el usuario y se             termina el juego
    if (x->cpuv == 0) {
        printf(MAGENTA"El rival ha muerto ¡has ganado!\n"RESET);
    } 
    //De lo contrario agrego un if, que indica que si el jugador llega a      0 vidas, se le muestra un mensaje de que murio, perdio, gano el           rival y se termina el juego
    else if (x->jugadorv == 0) {
        printf(MAGENTA"Has muerto\n"RESET);
    }
}
