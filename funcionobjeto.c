#include <stdio.h>
#include "libreria.h"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"

//Creo la funcion que almacenara las otras funciones de todos los objetos del juego, con el struct y sus respectivas variables
void objetos(struct xd* x) {
    //Indico que la variable daño indica que se disminuye 1 vida por cada     bala
    x->dano = 1;
    //Le doy la opcion al usuario de utilizar un objeto o no
    printf(CYAN"¿Quieres usar algún objeto? sí(1), no(0)\n"RESET);
    scanf("%d", &x->objeto);
    //Hago un if que indica que si el usuario presiona 1, se le mostrara         una lista de objetos que puede utilizar
        if (x->objeto == 1) {
        printf(CYAN"¿Qué objeto quieres usar?\n"RESET);
        printf(CYAN"1.navaja\n"RESET);
        printf(CYAN"2.esposas\n"RESET);
        printf(CYAN"3.lupa\n"RESET);
        printf(CYAN"4.jugo\n"RESET);
        printf(CYAN"5.lata\n"RESET);
        scanf("%d", &x->objeto);
        //Si el usuario presiona 1, elige la navaja
        if (x->objeto == 1) {
            printf(GREEN"Has usado la navaja\n"RESET);
            //Llamo la funcion de la navaja
            navaja(x);
        //Si el usuario presiona 2, elige las esposas
        } else if (x->objeto == 2) {
            printf(GREEN"Has usado las esposas\n"RESET);
            //Llamo la funcion de las esposas
            esposas(x);
        //Si el usuario presiona 3, elige la lupa
        } else if (x->objeto == 3) {
            printf(GREEN"Has usado la lupa\n"RESET);
            //Llamo la funcion de la lupa
            lupa(x);
        //Si el usuario presiona 4, elige el jugo
        } else if (x->objeto == 4) {
            printf(GREEN"Has usado el jugo\n"RESET);
            //Llamo la funcion del jugo
            jugo(x);
        //Si el usuario presiona 5, elige la lata
        } else if (x->objeto == 5) {
            printf(GREEN"Has usado la lata\n"RESET);
            //Llamo la funcion de la lata
            lata(x);
        //Si el usuario presiona un numero que no sea 1, 2, 3, 4 o 5, se          le mostrara un mensaje para que ingrese una opcion valida
        }else {
            printf("Opción inválida.\n");
        }
    }
    else if (x->objeto == 0){
        printf(RED"No has usado ningun objeto\n"RESET);
    }else {
        printf("Opción inválida.\n");
    }
}
