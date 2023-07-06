#include <stdio.h>
#define constante 3.1416

int main (int argc, char *argv[]) {
    int valor;
    typedef int entero;

    entero valor1;
    entero valor2;

    typedef enum {lunes,matres,miercoles,jueves,viernes,sabado,domingo} semana;
    semana dia_semana1=lunes;
    if (dia_semana1==lunes){
        printf("Estamos a lunes\n");
    }else{
        printf("No estamos a lunes\n");
    }

    printf("%f",constante);
    

    return 0;
}