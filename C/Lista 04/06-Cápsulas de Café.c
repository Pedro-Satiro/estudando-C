#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcular(int n, int total) {
    if (n == 7) {
        return total;
    }
    int caixas;
    char tamanho;
    scanf ("%d", &caixas);
    getchar();
    tamanho = getchar();
    if (tamanho == 'p'|| tamanho == 'P' ){
        total += caixas * 10;
    } else {
        total += caixas *16; 
    }
    n++;
	return calcular(n, total);
}

int main (){
    int n = 0,a,xicaras;
    a = calcular(n, 0);
    printf ("%d\n", a);

    xicaras = (a*2)/7;
    printf("%d",xicaras);
}