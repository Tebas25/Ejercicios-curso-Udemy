#include <stdio.h>

int main (int argc, char *argv[]) {
    float base, altura;
    printf("Introduzca la base del ractangulo: ");
    scanf("%f",&base);
    printf("Introduzca la altura del rectangulo: ");
    scanf("%f",&altura);
    float perimetro=base*altura;
    printf("El perimetro del rectangulo es: %.2f",perimetro);
    return 0;
}