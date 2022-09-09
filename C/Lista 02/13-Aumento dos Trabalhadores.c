/*
Link:https://thehuxley.com/problem/368?quizId=7853
Descrição
Devido à proximidade com o Dia do Trabalho, uma empresa resolveu conceder aumentos salariais a seus funcionários. Aqueles com salário superior a R$ 500, terão aumento de 10%, enquanto os que ganham mais de R$ 300 terão aumento de 7%. Os demais funcionários terão aumento de apenas 5%. Escreva um programa que receba como entrada o salário atual de um funcionário, calcule e exiba o valor de seu novo salário já com o aumento concedido.

Formato de entrada

Um número real.

Dica: não use mensagens no input

Formato de saída

Um número float com apenas duas casas decimais
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double(valor);
    scanf("%lf", &valor);
    
    if (valor > 300.0 && valor <500.0 ){
        valor = valor * 1.07;
    } else if (valor > 500.0){
         valor = valor * 1.10;
    } else{
        valor = valor * 1.05;
    }
    printf("%.2lf",valor);

	return 0;
}