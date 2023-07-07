#include <stdio.h>

int main (int argc, char *argv[]) {
    int suma=0, contador=0, numero=-1;
    while (numero!=0)
    {
        printf("Introduce un número: ");
        scanf("%d",&numero);
        contador++;
        suma+=numero;
    }
    float promedio= suma/contador;
    printf("La suma de todos los números es: %d y el promedio es: %.2f",suma, promedio);
    return 0;
}