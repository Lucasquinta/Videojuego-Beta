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

void InicializarStruct
(struct xd asd)
{
    asd.bala = 4;
    asd.cpu = 6;
}

    int main() {
        srand(time(NULL));
        struct xd x;
        int bala;
        int cpu;
        int jugador;
        int cpuv = 5;
        int jugadorv = 5;
        int menu;
        int navaja;
        int esposas;
        int lupa;
        int Jugo;
        int lata;
        int objeto;
        int xd;
        int objeto2;
        int dano = 1;
        int cargando;
        int opcion;
        printf("\n");
        mostrarMenu(x.menu, x.bala, x.cpu, x.cpuv, x.jugador, x.jugadorv);
        return 0;
    }
