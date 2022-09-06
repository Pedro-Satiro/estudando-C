/*
link:https://thehuxley.com/problem/43?quizId=7853
Descrição
Faça um programa que leia 3 números inteiros e imprima um (e apenas um) dos seguintes números:

1 (Se todos os números são iguais)
2 (Se todos os números são diferentes)
3 (Se apenas dois números são iguais)

Formato de entrada

Consiste de 3 números inteiros.

Formato de saída

Consiste de um número indicando uma das 3 situações de igualdade entre os valores de entrada conforme demonstrado na descrição
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
 
    if (a == b && b == c && c == a){
        printf("1");
    } else if (a == b || a == c || c == b){
        printf("3");
    } else{
        printf("2");
    }
	return 0;
}