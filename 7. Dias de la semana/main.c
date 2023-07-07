#include <stdio.h>

int main (int argc, char *argv[]) {
    int dia;
    printf("Indroduzca un dia del 1 a 7, siendo lunes el dia 1 y domingo el dia 7: ");
    scanf("%d",&dia);
    switch (dia){
    case 1:
        printf("El dia es lunes");
        break;
    case 2:
        printf("El dia es martes");
        break;
    case 3:
        printf("El dia es miercoles");
        break;
    case 4:
        printf("El dia es jueves");
        break;
    case 5:
        printf("El dia es viernes");
        break;
    case 6:
        printf("El dia es sabado");
        break;
    case 7:
        printf("El dia es domingo");
        break;
    default:
        printf("Error, dia no válido");
        break;
    }
    return 0;    
}