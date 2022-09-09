/*
Link:https://thehuxley.com/problem/691?quizId=7853
Descrição
Receba dois números inteiros e os imprima em ordem crescente.

Formato de entrada

Dois números inteiros separados por um espaço em branco.

Formato de saída

Dois números inteiros separados por um espaço em branco.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a>=b)
    {
        printf("%d %d",b ,a);  
    }else if (a<b)
    {
        printf("%d %d",a ,b);
    }
	return 0;
}