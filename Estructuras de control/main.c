#include <stdio.h>

int main (int argc, char *argv[]) {
    int numero;
    int numero2;
    printf("Ingrese los dos numeros seprados por un espacio: ");
    scanf("%d %d",&numero,&numero2);

    if (numero>0 && numero2>0){
        printf("Los números es positivo\n");
    }else if (numero<0 || numero2<0){
        printf("Uno de los número es negativo\n");
    }else{
        printf("Los dos numeros son negativos\n");
    }
    printf("Fin del programa");
    return 0;
}