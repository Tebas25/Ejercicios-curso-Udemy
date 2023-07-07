#include <stdio.h>

int main (int argc, char *argv[]) {
    struct hora_entrada{
        int hora;
        int minuto;
    };
    struct entrada{
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };

    struct entrada e1;
    char continuar='S';
    int total=0;

    while (continuar=='S'){
        printf("Introduce la hora de entrada: ");
        scanf("%d",&e1.hora1.hora);
        printf("Introduce el minuto de entrada: ");
        scanf("%d",&e1.hora1.minuto);
        printf("Introduce el número de asistentes: ");
        scanf("%d",&e1.asistentes);
        
        for (int i = 0; i < e1.asistentes; i++)
        {
            int edad;
            printf("Introduce la edad del asistente %d",i+1);
            scanf("%d",&edad);
            if (edad<6){
                total=total=0;
            }else if (edad>=6 && edad<=15){
                total=total=5;
            }else if (edad>=16 && edad<=26 || edad>65){
                total=total+8;
            }else{
                total=total+10;
            }   
        }
        if (e1.asistentes>=5)
        {
            e1.precio=total-total*0.1;
        }else{
            e1.precio=total;
        }
        printf("Hora de entrada del grupo: %d:%d\n",e1.hora1.hora,e1.hora1.minuto);
        printf("Precio de las entradas del grupo %f\n",e1.precio);
        fflush(stdin);
        printf("Quiere continuar con otro grupo? ");
        scanf("%c",&continuar); 
    }

    printf("Hasta la proxima!!!!!!");
    return 0;
}