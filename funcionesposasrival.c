#include <stdio.h>
#include <stdlib.h>
#include "colores.h"
#include "libreria.h"

void esposasRival(struct xd* x){
    tablero(x);
    printf(GREEN"El rival uso las esposas\n"RESET);
    printf(GREEN"El rival pierde un turno\n"RESET);
  //Agrego el daño que sera por partida de 1 vida
  x->dano = 1;
  //Agrego un puntero a la variable de la bala, la cual va a ser             1(verdadera), o 2(Falsa)
  x->bala = rand() % 2;
  if (x->cpu == 0) {
      printf(RED"Tu rival se ha disparado a sí mismo\n"RESET);
      //Creo un if que indica que si la bala es verdadera, se le                descuenta una vida al rival
      if (x->bala == 1) {
          x->jugadorv -= x->dano;
          printf(CYAN"La bala es verdadera\n"RESET);
      } 
      //De lo contrario agrego un else que indica que la bala es falsa
      else {
          printf(CYAN"La bala es falsa\n"RESET);
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
 while(1){
    if (x->cpuv <= 0) {
        tablero(x);
      printf(MAGENTA"El rival ha muerto ¡has ganado!\n"RESET);
      break;
  } 
  //De lo contrario agrego un if, que indica que si el jugador llega a      0 vidas, se le muestra un mensaje de que murio, perdio, gano el           rival y se termina el juego
  else if (x->jugadorv <= 0) {
      tablero(x);
      printf(MAGENTA"Has muerto\n"RESET);
      break;
  }
     break;
}
}
