#include <stdio.h>

int main (int argc, char *argv[]) {
    int numero;
    printf("Introduce un número: ");
    scanf("%d",&numero);

    FILE *f;
    f= fopen("tabla.txt","w");
    
    for (int i = 0; i <= 10; i++)
    {
        fprintf(f,"%d\n",i*numero);
    }
    fclose(f);
    return 0;
}