#include <stdio.h>

int main (int argc, char *argv[]) {
    float pesos [5];
    float suma;
    int contMa=0;
    int contMe=0;
    for (int i = 0; i < 5; i++){
        printf("Introduzca un peso: ");
        scanf("%f",&pesos[i]);
        suma=suma+pesos[i];
    }
    float promedio=suma/5;
    for (int i = 0; i < 5; i++){
        if (pesos[i]>promedio){
            contMa++;
        }else{
            contMe++;
        }
    }
    
    printf("El número de pesos mayores al promedio es: %d\n",contMa);
    printf("El número de pesos menores al promedio es: %d\n",contMe);
    printf("El promedio de todos los peso es: %.2f",promedio);
    return 0;
}