#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

int main (int argc, char *argv[]) {
    struct producto *prod;
    prod = malloc(sizeof(struct producto));
    printf("Introduce el código: ");
    scanf("%d", &prod->codigo);
    printf("Introduce la descripción: ");
    scanf("%s",prod->descripcion);
    printf("Introduce el precio: ");
    scanf("%f",&prod->precio);

    printf("%d\n",prod->codigo);
    printf("%s\n", prod->descripcion);
    printf("%.2f\n",prod->precio);

    free(prod);
    prod= NULL;

    return 0;
}