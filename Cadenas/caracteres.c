#include <stdio.h>

int main (int argc, char *argv[]) {
    char cadena[50], cadena2[50], cadena3[50], cadena4[50];
    printf("Introduzca una cadena: ");
    gets(cadena);
    printf("Introduzca una cadena: ");
    gets(cadena2);
    printf("Introduzca una cadena: ");
    gets(cadena3);
    printf("Introduzca una cadena: ");
    gets(cadena4);

    printf("%s-%s-%s-%s",cadena,cadena2,cadena3,cadena4);
    return 0;
}