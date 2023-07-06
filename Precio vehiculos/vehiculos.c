#include <stdio.h>

int main (int argc, char *argv[]) {
    int preciobase,kilometros;
    float consumo,preciofinal;
    
    printf("Indrozca el precio base le vehiculo: ");
    scanf("%d",&preciobase);
    printf("Introduzca el numero de kilómetros: ");
    scanf("%d",&kilometros);
    printf("Introduzca el consumo: ");
    scanf("%f",&consumo);

    if (kilometros<20000 && consumo<=5){
        preciofinal=preciobase*1.2;
    }else if (kilometros>20000 && consumo<=5){
        preciofinal=preciobase*1.1;
    }else if (consumo>=5){
        preciofinal=preciobase*1.05;
    }
    
    printf("El precio final del vehiculo es: %.2f",preciofinal);
        
    
    return 0;
}