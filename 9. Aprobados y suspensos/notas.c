#include <stdio.h>

int main (int argc, char *argv[]) {
    float nota;
    int alumnos,cont1=0,cont2=0;

    printf("Ingrese el número de alumnos: ");
    scanf("%d",&alumnos);
    for (int i = 0; i < alumnos; i++){
        printf("Ingrese la nota del alumnos %d: ",i+1);
        scanf("%f",&nota);
        if (nota>=5){
            cont1++;
        }else {
            cont2++;
        }   
    }
    
    printf("El número de alumnos aprovados es %d\n",cont1);
    printf("El número de alumnos suspendidos es %d\n",cont2);
    return 0;
}