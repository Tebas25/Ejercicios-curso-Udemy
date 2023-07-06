#include <stdio.h>

int main (int argc, char *argv[]) {
    int informacion[3][4]={{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int sumaAlta=0, sumaMe=0, sumaBa=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (j==1)
            {
                sumaBa=sumaBa+informacion[i][j];
            }else if (j==2)
            {
                sumaMe=sumaMe+informacion[i][j];
            }else if (j==3)
            {
                sumaAlta=sumaAlta+informacion[i][j];
            }
        }
        
    }
    float promedioBa=sumaBa/3;
    float promedioAlta=sumaAlta/3;
    float promedioMe=sumaMe/3;
    printf("Promedio temporada baja: %f\n",promedioBa);
    printf("Promedio temporada alta: %.2f\n",promedioAlta);
    printf("Promedio temporada media: %.2f\n",promedioMe);
    return 0;
}