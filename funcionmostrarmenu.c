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

//Creamos la funcion que nos mostrara el menu y sus opciones
void mostrarMenu() {
    //Llamamos al struct, y lo asignaremos como "x"
    struct xd x;
    //Creamos la estructura del menu 
    printf(RED"┌────────────────────────┐\n"RESET);
    printf(RED"│ Menú Principal         │\n"RESET);
    printf(RED"│ 1. Jugar               │\n"RESET);
    printf(RED"│ 2. Reglas              │\n"RESET);
    printf(RED"│ 3. Objetos             │\n"RESET);
    printf(RED"│ 4. Historia            │\n"RESET);
    printf(RED"│ 5. Como jugar          │\n"RESET);
    printf(RED"│ 6. Imagen de revolver  │\n"RESET);
    printf(RED"└────────────────────────┘\n"RESET);
        printf(CYAN"Ingrese una opcion\n"RESET);
        scanf("%d", &x.menu);
    //Creamos una funcion que nos indica que si la opcion del menu es 2,     nos mostrara las reglas del juego
    if(x.menu == 2){
        //Agregamos en un for, un temporizador para que cargue el                 siguiente texto
        for (x.cargando = 0; x.cargando <= 100; x.cargando += 10) {
                                    printf("┌──────────────────────────────────┐\n");
                                    printf("│          Cargando:%3d%%           │\n", x.cargando);
                                    printf("│                                  │\n");
                                    printf("└──────────────────────────────────┘\n");
                                    usleep(200000); 

                                system("clear");
        }
        printf(BLUE"\n⦁ Será un juego por turnos (uno para el jugador y otro para el bot).\n"RESET);
        printf(BLUE"\n\n⦁ Se contará con un revólver de 8 balas de capacidad.\n"RESET);
        printf(BLUE"\n\n⦁ Habrá un total de 8 objetos con efectos distintos (puede aumentar o disminuir el número de\n"RESET);                              
        printf(BLUE"objetos a medida que el proyecto avance)\n"RESET);            
        printf(BLUE"\n\n⦁ Se repartirán objetos al jugador y al bot (1 a 4)\n"RESET);
        printf(BLUE"\n\n⦁ Tanto el jugador como el ot contarán con 3 vidas(Que pueden aumentar con el uso de objetos).\n"RESET);
        printf(BLUE"\n\n⦁ Si el jugador o el bot pierden todas sus vidas se declarara el final de la partida"RESET);
        //Agregamos una opcion por si el usuario quiere volver al menu         solo debe presionar la tecla 1, sin reiniciar el codigo 
        printf(GREEN"\n\nPresione 1 para volver al menu\n"RESET);
        scanf("%d", &x.menu);
        //Creamos un if que nos indica que si presionamos 1, dentro de           la opcion 2, nos llevara al menu principal
        if(x.menu == 1){
                printf("┌──────────────────────────────────┐\n");
                printf("│          Cargando:%3d%%          │\n", x.cargando);
                printf("│                                  │\n");
                printf("└──────────────────────────────────┘\n");
                usleep(200000);

            system("clear");
            mostrarMenu();
        }


    }
    //Agrego un if que nos indica que si la opcion del menu es 3, nos         describira las funciones que tiene cada objeto del juego
    if(x.menu == 3){
        //Vuelvo a agregar el for con el temporizador para que cargue el         siguiente texto
        for (x.cargando = 0; x.cargando <= 100; x.cargando += 10) {
                                    printf("┌──────────────────────────────────┐\n");
                                    printf("│          Cargando:%3d%%          │\n", x.cargando);
                                    printf("│                                  │\n");
                                    printf("└──────────────────────────────────┘\n");
                                    usleep(200000); 

                                system("clear");
        }
        printf(BLUE"\n\n⦁ Navaja: Al disparar haces uno mas de daño(si la bala es verdadera)\n"RESET);
        printf(BLUE"\n\n⦁ Esposas: El rival pierde un turno.\n"RESET);
        printf(BLUE"\n\n⦁Lupa:Puedes ver si la siguiente bala es verdadera o falsa.\n"RESET);
        printf(BLUE"\n\n⦁Jugo:Te sumas una vida.\n"RESET);
        printf(BLUE"\n\n⦁Lata:sacas la siguiente bala de la escopeta.\n"RESET);
        printf(GREEN"\n\nPresione 1 para volver al menu\n"RESET);
        scanf("%d", &x.menu);
        //Agrego un if dentro del if que nos indica que si presionamos             1, dentro de la opcion 3, nos llera al menu de nuevo
        if(x.menu == 1){
                printf("┌──────────────────────────────────┐\n");
                printf("│          Cargando:%3d%%          │\n", x.cargando);
                printf("│                                  │\n");
                printf("└──────────────────────────────────┘\n");
                usleep(200000);

            system("clear");
            mostrarMenu();

        }
    }
    //Agrego un if que nos indica que si la opcion del menu es 1, nos         empezara a mostrar el juego, y ya empezaremos a jugar
    else if(x.menu == 1){
            printf("┌──────────────────────────────────┐\n");
            printf("│          Cargando:%3d%%          │\n", x.cargando);
            printf("│                                  │\n");
            printf("└──────────────────────────────────┘\n");
            usleep(200000);

        system("clear");
        //Agregamos la funcion del juego directamente, con sus                     respectivas variables
        juego(x.bala, x.cpu, x.cpuv, x.jugador, x.jugadorv);
        //Agregamos la opcion para el usuario, que finalizado el juego             pueda volver al menu principal
        printf(GREEN"\n\nPresione 1 para volver al menu o 2 para volver          a empezar el juego\n"RESET);
        scanf("%d", &x.menu);
        if(x.menu == 1){
                printf("┌──────────────────────────────────┐\n");
                printf("│          Cargando:%3d%%          │\n", x.cargando);
                printf("│                                  │\n");
                printf("└──────────────────────────────────┘\n");
                usleep(200000);

            system("clear");
            mostrarMenu();
        }
        else if(x.menu == 2){
            printf("┌──────────────────────────────────┐\n");
                printf("│          Cargando:%3d%%          │\n", x.cargando);
                printf("│                                  │\n");
                printf("└──────────────────────────────────┘\n");
                usleep(200000);

            system("clear");
            juego(x.bala, x.cpu, x.cpuv, x.jugador, x.jugadorv);
        }

    }
    //Agrego un if que nos indica que si la opcion del menu es 4, nos         mostrara la historia del juego y su origen
    else if(x.menu == 4){
        //Vuelvo a agregar el for con el temporizador para que cargue el         siguiente texto
        for (x.cargando = 0; x.cargando <= 100; x.cargando += 10) {
                                    printf("┌──────────────────────────────────┐\n");
                                    printf("│          Cargando:%3d%%          │\n", x.cargando);
                                    printf("│                                  │\n");
                                    printf("└──────────────────────────────────┘\n");
                                    usleep(200000); 

                                system("clear");
        }
        printf(CYAN"\n\nEn un bar clandestino, Jack, un ex soldado endeudado, se une a un juego mortal llamado"RESET);                   printf(CYAN"Buckshot Roulette"". Jack conoce este juego de la ruleta rusa y se enfrenta a la escopeta"RESET); 
        printf(CYAN" cargada con una sola bala. Con cada ronda, la tensión aumenta y las verdaderas intenciones detrás     del"RESET); 
        printf(CYAN"juego se revelan. Jack debe confrontar su pasado mientras lucha por sobrevivir y enfrenta una elección"RESET); 
        printf(CYAN"final que desafía su valentía y moralidad"RESET);
        //Doy la opcion al usuario para que pueda volver al menu                 principal
        printf(GREEN"\n\nPresione 1 para volver al menu\n"RESET);
        scanf("%d", &x.menu);
        if(x.menu == 1){
                printf("┌──────────────────────────────────┐\n");
                printf("│          Cargando:%3d%%          │\n", x.cargando);
                printf("│                                  │\n");
                printf("└──────────────────────────────────┘\n");
                usleep(200000);

            system("clear");
            //Llamo la funcion del mostrarMenu para que el usuario                     vuelva al menu
            mostrarMenu();
        }
}
    //Agrego un ultimo if que nos indica que si la opcion del menu es 5,         nos mostrara como se juega el juego    
    else if(x.menu == 5){
        //Vuelvo a agregar el for con el temporizador para que cargue el         siguiente texto
        for (x.cargando = 0; x.cargando <= 100; x.cargando += 10) {
                                    printf("┌──────────────────────────────────┐\n");
                                    printf("│          Cargando:%3d%%           │\n", x.cargando);
                                    printf("│                                  │\n");
                                    printf("└──────────────────────────────────┘\n");
                                    usleep(200000);

                                system("clear");
        }
        printf(CYAN"\n⦁ Será un juego por turnos (uno para el jugador y otro"RESET); 
        printf(CYAN"para el bot)."RESET);
        printf(CYAN"\n\n⦁ Se contará con un revólver de 8 balas de capacidad."RESET);
        printf(CYAN"\n\n⦁ Habrá un total de 8 objetos con efectos distintos (puede aumentar o "RESET);
        printf(CYAN"disminuir el número de objetos a medida que el proyecto avance)"RESET);
        printf(CYAN"\n\n⦁ Se repartirán objetos al jugador y al bot (1 a 4)"RESET);
        printf(CYAN"\n\n⦁ Tanto el jugador como el bot contarán con 3 vidas(Que pueden "RESET);
        printf(CYAN"aumentar con el uso de objetos)."RESET);
        printf(CYAN"\n\n⦁ Si el jugador o el bot pierden todas sus vidas se declarara el final de "RESET);
        printf(CYAN"la partida"RESET);
        //Le damos la opcion al usuario para que pueda volver al menu                 principal
        printf(GREEN"\n\nPresione 1 para volver al menu\n"RESET);
        scanf("%d", &x.menu);
        //Creamos un if que nos indica que si presionamos 1, dentro de           la opcion 5, nos llevara al menu
        if(x.menu == 1){
            printf("┌──────────────────────────────────┐\n");
                printf("│          Cargando:%3d%%           │\n", x.cargando);
                printf("│                                  │\n");
                printf("└──────────────────────────────────┘\n");
                usleep(200000);

            system("clear");
            mostrarMenu();
        }
        

    }
    else if(x.menu == 6){
        //Vuelvo a agregar el for con el temporizador para que cargue el         siguiente texto
        for (x.cargando = 0; x.cargando <= 100; x.cargando += 10) {
                                    printf("┌──────────────────────────────────┐\n");
                                    printf("│          Cargando:%3d%%           │\n", x.cargando);
                                    printf("│                                  │\n");
                                    printf("└──────────────────────────────────┘\n");
                                    usleep(200000);

                                system("clear");
        }
        cargarImagen();
    }
}
