/*
Link:https://www.thehuxley.com/problem/22/code-editor/?quizId=5559
Descrição
Faça um programa que leia um número inteiro e imprima a tabuada de multiplicação deste número. Suponha que o número lido da entrada é maior que zero.

Formato de entrada

Um número inteiro.

Formato de saída

A tabuada de multiplicação correspondente ao número digitado. Verifique o exemplo de saída para a especificação do formato.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero;
    scanf("%d", &numero);

    printf("%d X 1 = %d",numero, numero*1);
    printf("\n%d X 2 = %d",numero, numero*2);
    printf("\n%d X 3 = %d",numero, numero*3);
    printf("\n%d X 4 = %d",numero, numero*4);
    printf("\n%d X 5 = %d",numero, numero*5);
    printf("\n%d X 6 = %d",numero, numero*6);
    printf("\n%d X 7 = %d",numero, numero*7);
    printf("\n%d X 8 = %d",numero, numero*8);
    printf("\n%d X 9 = %d",numero, numero*9);
   
	return 0;
}