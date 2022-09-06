/*
Link:https://www.thehuxley.com/problem/17?quizId=7852
Descrição
Faça um programa que leia um número inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).

Formato de entrada

Um número inteiro.

Formato de saída

O inteiro anterior e o sucessor, separados por um espaço.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, ante, apos ;
    scanf("%d", &num);
    ante = num-1;
    apos = num+1;
    printf("%d %d",ante,apos);

	return 0;
}