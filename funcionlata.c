#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "libreria.h"
#define YELLOW  "\033[1;33m"
#define RED     "\033[1;31m"
#define BLUE    "\033[1;34m"
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"

//Creo la funcion de la lata
void lata(){
  //Agrego el struct
  struct xd x;
  //Aqui nos indica que vamos a poder saber cual sera la siguiente bala
   x.bala = rand() % 2;
  //Creamos en un if que si la bala es 1, sacaremos una bala verdadera
  if(x.bala == 1){
    printf("Has sacado una bala verdadera\n");
    x.bala = rand() % 2;
  }
  //De lo contrario crearemos otro if que nos indica que si la bala es 0,     sacaremos una bala falsa  
  else if(x.bala == 0){
    printf("Has sacado una bala falsa\n");
    x.bala = rand() % 2;
  }
}
