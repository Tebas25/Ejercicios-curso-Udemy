#include <stdio.h>

int main (int argc, char *argv[]) {
    int nota;
    printf("Introduce la nota del alumno: ");
    scanf("%d",&nota);
    if(nota<5){
        printf("Suspenso\n");
    }else if (nota==6)
    {
        printf("Bien");
    }else if (nota==7 || nota==8 )
    {
        printf("Notable");
    }else if (nota==9 || nota==10)
    {
        printf("Sobresaliente");
    }else{
        printf("Nota introducida NO válida");
    }
    return 0;
}