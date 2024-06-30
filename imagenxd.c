#include <stdio.h>
#include <stdlib.h>

//Creo una funcion para agregar un archivo txt, que utilizaremos como imagen
void cargarImagen(char *nonvre) {
  FILE *f = fopen(nonvre, "r");
  if(f) { 
    char CE;
    while((CE = fgetc(f)) != EOF) {
      putc(CE, stdout);
    }
    fclose(f);
  } else {
    printf("No existe un formato para este enemigo\n");
  }
}
