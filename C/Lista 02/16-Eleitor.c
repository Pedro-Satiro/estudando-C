/*
Link:https://thehuxley.com/problem/42?quizId=7853
Descrição
Faça um programa que leia a idade (valor inteiro) de uma pessoa e informe sua classe eleitoral:

nao eleitor (abaixo de 16 anos)
eleitor obrigatorio (maior e igual a 18 ou menor e igual a 65 anos)
eleitor facultativo (entre 16 e 18 anos ou acima dos 65 anos)

Formato de entrada

Consiste de um número inteiro indicando a idade da pessoa.

Formato de saída

Uma linha escrito:

"nao eleitor", "eleitor obrigatorio" ou "eleitor facultativo" (sem as aspas) de acordo com o critério da descrição.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idade;
    scanf("%d", &idade);
    if (idade >= 18 && idade <= 65){
        printf("eleitor obrigatorio");
    }else if (idade< 16){
        printf("nao eleitor");
    }else {
        printf("eleitor facultativo");
    }
	return 0;
}