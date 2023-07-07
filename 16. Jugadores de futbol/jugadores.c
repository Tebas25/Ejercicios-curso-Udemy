#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };

    struct jugador ListaJugadores[5];
    int opcion;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Introduzca el nombre del jugador %d: ",i+1);
        gets(ListaJugadores[i].nombre);
        printf("Introduzca la edad del jugador %d: ",i+1);
        scanf("%d",&ListaJugadores[i].edad);
        printf("Introduzca la altura del jugador %d: ",i+1);
        scanf("%f",&ListaJugadores[i].altura);
        fflush(stdin);
    }
    
    while (opcion!=4)
    {
        printf("1. Listar jugador\n");
        printf("2. Buscar jugador\n");
        printf("3. Jugador más alto\n");
        printf("4. Salir\n");
        printf("Eliga una opcion: ");
        scanf("%d",&opcion);
        fflush(stdin);

        switch (opcion)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                printf("Jugador de nombre %s y altura %.2f\n",ListaJugadores[i].nombre, ListaJugadores[i].altura);
            }
            break;
        case 2:
            char nombreJugador[50];
            printf("Introduce el nombre del jugador: ");
            gets(nombreJugador);
            int encontrado=0;
            for (int i = 0; i < 5; i++)
            {
                if (strcmp(ListaJugadores[i].nombre, nombreJugador)==0){
                    encontrado=1;
                    printf("La edad del jugador es %d y su altura es %.2f\n",ListaJugadores[i].edad, ListaJugadores[i].altura);
                }
            }
            if (encontrado==0)
            {
                printf("Jugador no encontrado\n");
            }
            break;
        case 3:
            float mayorAltura=ListaJugadores[0].altura;
            char nombreAlturaMayor[50];
            int edadAlturaMayor=ListaJugadores[0].edad;
            strcpy(nombreAlturaMayor,ListaJugadores[0].nombre);
            for (int i = 0; i < 5; i++)
            {
                if (ListaJugadores[i].altura>mayorAltura)
                {
                    strcpy(nombreAlturaMayor, ListaJugadores[i].nombre);
                    edadAlturaMayor=ListaJugadores[i].edad;
                    mayorAltura= ListaJugadores[i].altura;
                }
            }
            printf("El nombre del jugador es %s y su altura es %f\n",nombreAlturaMayor, mayorAltura);
            break;
        case 4:
            printf("Fin del programa: ");
            break;
        default:
            printf("Opcion no valida\n");
            break;
        }
    }
    return 0;
}