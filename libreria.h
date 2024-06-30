//Creo una libreria que va a almacenar todas las funciones que voy a usar en el proyecto, y ademas contenera el struct que voy a usar en el proyecto.
#ifndef LIBRERIA_H
#define LIBRERIA_H
//Creo un struct que va a almacenar los datos que voy a usar en el proyecto
struct xd{
    int bala;
    int guardarBala;
    int cpu;
    int cpuv;//vida rival
    int jugador;
    int jugadorv;//vida jugador
    int menu;
    int navaja;
    int esposas;
    int lupa;
    int Jugo;
    int lata;
    int objeto;
    int objeto2;
    int dano;
    int cargando;
    int opcion;
};
//Creo una funcion para las funciones del juego y la forma de jugar
void juego();
//Creo una funcion para el menu del juego
void mostrarMenu();
//Creo una funcion para los objetos del juego, que almacenara los datos de los objetos y sus funciones
void objetos();  
//Creo una funcion para la lata
void lata();
//Creo una funcion para las esposas
void esposas();
//Creo una funcion para la navaja
void navaja();
//Creo una funcion para el jugo
void jugo();
//Creo una funcion para la lupa
void lupa();
//Creo la funcion que contendra los movimientos del rival
void rival();
//Agrego la funcion que tendra la imagen
void cargarImagen(); 
//Finalizo la libreria
#endif 
