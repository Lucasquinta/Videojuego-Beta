#include <stdio.h>
#include "libreria.h"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"

//Creamos la funcion de la lupa, donde le agregaremos el struct con sus respectivas variables y agregaremos un puntero
void lupa(struct xd* x) {
    //Creamos un if que nos va a decir que mediante la variable bala que tenemos en otra funcion, nos indica que si es 1, nos va a decir que la bala es verdadera
    if (x->bala == 1) {
        printf(GREEN"La bala es verdadera\n"RESET);
    } 
    //De lo contrario nos va a decir que la bala es falsa
    else {
        printf(YELLOW"La bala es falsa\n"RESET);
    }
}
