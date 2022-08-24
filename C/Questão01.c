#include <stdio.h>
#include <stdlib.h>

int main () {
    float nota1, nota2;
    scanf("%f", &nota1);
    scanf("%f", &nota2);

    printf("MEDIA = %.5f",((nota1*3.5)+(nota2*7.5))/11);

   return 0;
}