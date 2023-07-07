#include <stdio.h>

int main (int argc, char *argv[]) {
    char c1, c2, c3;
    printf("Introduce 3 caracteres: ");
    scanf("%c %c %c",&c1,&c2,&c3);
    printf("%c-%c-%c",c1, c2, c3);
    return 0;
}