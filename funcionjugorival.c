#include <stdio.h>
#include <stdlib.h>
#include "colores.h"
#include "libreria.h"

void jugoRival(struct xd* x){
  //Agrego un puntero con el struct que nos indica que al utilizar el o    bjeto del jugo se le sumara una vida al usuario
  x->cpuv += 1;
  printf(GREEN"El rival recupera una vida. Le quedan %d vidas\n"RESET, x->cpuv);
  tablero(x);
}
