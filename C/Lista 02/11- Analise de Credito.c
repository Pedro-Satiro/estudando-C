/*  
Link:https://thehuxley.com/problem/1121?quizId=7853
Descrição
Escreva um programa que determine qual é o valor mensal da parcela do empréstimo que um banco pode autorizar. Para isso, o programa precisa do valor do salário e de quanto a renda mensal já está comprometida com outros empréstimos. Considere que o limite de comprometimento do salário é de 30%. O programa deve calcular e mostrar na tela qual o limite disponível da parcela mensal do novo empréstimo.  Fique atento porque a renda mensal comprometida já pode exceder os 30% e neste caso o limite disponível da parcela mensal será zero.

Formato de entrada

A entrada consiste de 2 números reais (ponto flutuante). Na primeira linha, o salário, e na segunda linha, o valor já comprometido da renda mensal.


Formato de saída


A saída consiste de uma linha contendo um número real (ponto flutuante) com 2 casas decimais que informa o valor máximo da parcela mensal (descontando o que já está comprometido).
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double salario, renda,limite, sobra;
    scanf("%lf %lf", &salario, &renda);

    limite = salario* 0.30;
    sobra = limite - renda;

    if (sobra>=0){
        printf("%.2lf", sobra);
    } else{
        printf("0.00");
    }   


	return 0;
}