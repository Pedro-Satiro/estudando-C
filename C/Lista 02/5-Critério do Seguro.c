/*
Link:https://thehuxley.com/problem/511/code-editor/?quizId=7853
Descrição
Uma corretora de seguros cobra mais barato se o principal condutor do veículo é mulher e se tem mais de 40 anos. Caso contrário, o valor do seguro fica caro.

Faça um programa que leia um valor inteiro (0 ou 1) que indica se o condutor é homem e outro valor inteiro (0 ou 1) que indica se o condutor tem mais de 40 anos. Com base nos valores lidos, o programa deve indicar, utilizando 0 ou 1, se o seguro vai ficar barato (verdadeiro - 1) ou caro (falso - 0).

Formato de entrada

Dois números inteiros (0 ou 1) separados por um fim de linha, indicando se o cliente é homem e tem mais de 40 anos, respectivamente.

Formato de saída

1 número inteiro (0 ou 1) indicando o valor do seguro a ser pago pelo condutor:

1 caso fique barato

0 caso fique caro
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int homem, velho;
    scanf("%d %d", &homem, &velho);
    if (homem == 0 && velho == 1)
    {
        printf("1");
    } else{
        printf("0");
    }
    
	return 0;
}