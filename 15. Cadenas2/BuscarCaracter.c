#include <stdio.h>

int main (int argc, char *argv[]) {
    char cadena[50];
    char caracter;
    printf("Indroduzca una cadena: ");
    gets(cadena);

    printf("Introduzca una caracter: ");
    caracter=getchar();

    int i=0;
    int post=-1;

    while (cadena[i]!='\0' && post==-1){
        if (cadena[i]==caracter){
            post=i;
        }
        i++;
    }
    if(post!=-1){
        printf("El caractar %c se encuentra en la posición %d",caracter, post);
    }else{
        printf("El caracter %c no se encuentra en la cadena");
    }

    return 0;
}