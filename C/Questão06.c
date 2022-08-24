/*
link:https://www.thehuxley.com/problem/1042?quizId=5559
Descrição
Escreva um programa que leia a idade de uma pessoa e informe quantos segundos ela viveu.

Obs: Considere que um ano sempre tem 365 dias.

Formato de entrada

A idade de uma pessoa em anos.

Formato de saída

A mesma idade conertida para segundos.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idade, tdv;
    scanf("%d", &idade);
    tdv = idade*31536000;
    printf("%d", tdv);


    return 0;
}