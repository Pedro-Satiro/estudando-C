/*
Link:https://thehuxley.com/problem/1532?quizId=7853
Descrição
Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool:
até 20 litros, desconto de 3% por litro
acima de 20 litros, desconto de 5% por litro
Gasolina:
até 20 litros, desconto de 4% por litro
acima de 20 litros, desconto de 6% por litro
Diesel:
até 25 litros, não existe desconto
acima de 25 litros, desconto de 4% por litro
Implemente um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina e D-Diesel), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50, o preço do litro do álcool é R$ 1,90 e o preço do litro de Diesel é R$ 1,66.
Formato de entrada

Um valor real, representando a quantidade, em litros, do combustível vendido e o tipo do combustível (A, G ou D).

Formato de saída

O valor a ser pago pelo cliente com duas casas decimais.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p;
    double preco, litro, desconto = 0.0, valorf;
    char tipo;
    scanf("%lf %c", &litro, &tipo);

    if (tipo == 'A' ){
        preco = 1.90;
        if (litro <= 20 ){
            desconto = (preco * litro)*0.03;
        } else {
            desconto = (preco * litro)*0.05;
        }
    } else if (tipo == 'G'){
        preco = 2.50;
        if (litro <= 20 ){
            desconto = (preco * litro)*0.04;
        } else {
            desconto = (preco * litro)*0.06;
        }
    } else {
        preco = 1.66;
        if (litro > 25 ){  
            desconto = (preco * litro)*0.04;
        }
    }
    valorf = (litro * preco) - desconto;
    printf("R$ %.2lf", valorf);
	return 0;
}