/*
Link:https://thehuxley.com/problem/510/code-editor/?quizId=7853
Descrição
O valor normal de um ingresso em um determinado cinema é R$ 20,00. Entretanto, se o cliente é estudante ou idoso, o cinema cobra apenas meia-entrada.

Faça um programa que leia um valor inteiro (0 ou 1) que indica se o cliente é estudante e outro valor inteiro (0 ou 1) que indica se o cliente é idoso. Com base nos valores lidos, o programa deve indicar, utilizando 0 ou 1, se este cliente paga entrada completa (falso - 0) ou meia-entrada (verdadeiro - 1).

Formato de entrada

Dois números inteiros (0 ou 1) separados por um fim de linha, indicando se o cliente é estudante e idoso, respectivamente.

Formato de saída

1 número inteiro (0 ou 1) indicando como deve ser o pagamento do cliente:

1 caso seja meia-entrada

0 caso seja entrada completa
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y;
    scanf ("%d",&x);
    scanf ("%d",&y);
    if (x == 1 && y == 1 ){
        printf("1");
    } else if ( x == 1 || y == 1){
        printf("1");
    } else  {
    printf("0");
    }

	return 0;
}