/*
Link: https://www.thehuxley.com/problem/279?quizId=5559
Descrição
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

Formato de entrada

O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

Formato de saída

Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int funcionario,horas;
    float salario;
    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%f", &salario);

    salario = salario*horas;

    printf("NUMBER = %d", funcionario );
    printf("SALARY = R$ %f", salario );

	return 0;
}

