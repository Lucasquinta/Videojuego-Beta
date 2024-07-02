#include <stdio.h>
#include "colores.h"
#include "libreria.h"

//Creo la funcion que contenera los beneficios del objeto del jugo y llamo al struct con sus respectivas variables
void jugo(struct xd* x) {
    //Agrego un puntero con el struct que nos indica que al utilizar el o    bjeto del jugo se le sumara una vida al usuario
    x->jugadorv += 1;
    printf(GREEN"Recuperas una vida. Te quedan %d vidas\n"RESET, x->jugadorv);
}
