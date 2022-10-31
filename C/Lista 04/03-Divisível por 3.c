#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcular (int numero, int divisor, int resposta){
    if (divisor > numero) {
        return resposta;
    }
    if (numero % divisor == 0 && divisor %3 ==0) {
       resposta++;
              
    }
    divisor++;
    return calcular(numero, divisor, resposta); 
}

int main() {
    int numero, divisor = 1, resposta = 0, res;
    scanf("%d", &numero);
    res = calcular(numero, divisor, resposta);

    if (res == 0){
        printf("O numero nao possui divisores multiplos de 3!");
    } else {
        printf("%d",res);
    }
	return 0;
}