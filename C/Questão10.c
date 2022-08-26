/*
Link:www.thehuxley.com/problem/16?quizId=7852
Descrição
Você está organizando um bingo e deseja que cada número sorteado apareça no telão.

Faça um programa que dado um número digitado imprima: "O numero sorteado foi: X", onde X é o número sorteado.

Formato de entrada

Um número inteiro

Formato de saída

A mensagem: "O numero sorteado foi: X", onde x corresponde ao número digitado
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1;
    scanf("%d",&num1);
    printf ("O numero sorteado foi: %d", num1);
	return 0;
}