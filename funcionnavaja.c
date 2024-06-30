#include <stdio.h>
#include "libreria.h"
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"

//Creo la funcion de la navaja que nos va a indicar que al utilizarla, se le sumara mayor daño al usuario, osea que podria quitar 2 vidas al rival, y llamo al struct con sus respectivas variables
void navaja(struct xd* x) {
    //Agrego un puntero que indica que la funcion de daño se incrementara     una vida mas en contra del rival que se utilice
    x->dano += 1;
    printf(GREEN"Has usado la navaja. Tu daño aumenta a %d\n"RESET, x->dano);
}
