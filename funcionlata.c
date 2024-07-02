#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "colores.h"
#include "libreria.h"

//Creo la funcion de la lata
void lata(){
  //Agrego el struct
  struct xd x;
  //Aqui nos indica que vamos a poder saber cual sera la siguiente bala
   x.bala = rand() % 2;
  //Creamos en un if que si la bala es 1, sacaremos una bala verdadera
  if(x.bala == 1){
    printf("A salido bala verdadera\n");
    x.bala = rand() % 2;
  }
  //De lo contrario crearemos otro if que nos indica que si la bala es 0,     sacaremos una bala falsa  
  else if(x.bala == 0){
    printf("A salido una bala falsa\n");
    x.bala = rand() % 2;
  }
}
