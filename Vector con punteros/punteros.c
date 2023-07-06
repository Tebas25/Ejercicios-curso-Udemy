#include <stdio.h>

int main (int argc, char *argv[]) {
    float vector[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Introduce un número real: ");
        scanf("%f",&vector[i]);
    }
    
    float *puntero= &vector[0];
    float media=0;
    for (int i = 0; i < 5; i++)
    {
        media= media + *(puntero+i);
    }
    media = media/5;
    printf("La media de los valores es %.2f",media);
    
    return 0;
}