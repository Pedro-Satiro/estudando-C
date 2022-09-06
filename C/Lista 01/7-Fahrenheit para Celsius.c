/*
Link:https://thehuxley.com/problem/32?quizId=7852
Descrição
Converter uma temperatura dada em graus Fahrenheit para graus Celsius.

Formato de entrada

A temperatura em Fahrenheit é dada como um número real.

Formato de saída

Um número real, formatado com duas casas decimais, seguido de um final de linha.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double f,c;
    scanf("%lf", &f);
    c = (f-32)*(5.0/9.0) ;
    printf("%.2lf",c);
	return 0;
}