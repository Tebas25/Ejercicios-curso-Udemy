#include <stdio.h>

int main (int argc, char *argv[]) {
    int numeros[10]= {4,7,9,75,-5,6,12,-18,0,1};
    int maximo=numeros[0];
    int minimo=numeros[0];
    for (int i = 1; i < 10; i++)
    {
        if (numeros[i]>maximo){
            maximo=numeros[i];
        }
        if (numeros[i]<minimo){
            minimo=numeros[i];
        }
    }
    printf("Valor máximo es: %d\n",maximo);    
    printf("Valor mínimo: %d",minimo);
    return 0;   
}
