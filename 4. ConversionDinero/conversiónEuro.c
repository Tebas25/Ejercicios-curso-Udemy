#include <stdio.h>

int main (int argc, char *argv[]) {
    float euro;
    printf("Introduzca los euros a convertir: ");
    scanf("%f",&euro);
    printf("%.2f euros equivale a %.2f pesetas",euro,euro*166.386);
    return 0;
}