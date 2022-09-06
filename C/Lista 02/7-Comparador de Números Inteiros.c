/*

link:https://thehuxley.com/problem/509/code-editor/?quizId=7853
Descrição
Faça um programa que leia dois valores inteiros (x e y) e imprima na tela o resultado das seguintes comparações entre estes dois valores, exatamente nesta ordem:

x é maior que y

x é igual a y

x é menor que y

x é diferente de y

x é maior ou igual a y

x é menor ou igual a y

Formato de entrada

Dois números inteiros separados por um fim de linha, representando os valores que serão comparados.

Formato de saída

6 valores, cada um deles separados por um fim de linha, seguindo o modelo do Exemplo de Saída. Os valores possíveis são 0 ou 1. O valor 0 deve ser utilizado para indicar que o resultado da comparação é falsa. O valor 1 deve ser utilizado para indicar que o resultado da comparação é verdadeira.

 

Obs.: Não esqueça de imprimir o fim de linha após o resultado.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, y;
    scanf("%d %d", &x , &y);
    if (x > y){
        printf("1\n");
    } else{
        printf("0\n");
    }

    if (x == y){
        printf("1\n");
    } else{
        printf("0\n");
    }   
      
    if (x < y){
        printf("1\n");
    } else{
        printf("0\n");
    }
    
    if (x != y){
        printf("1\n");
    } else{
        printf("0\n");
    }

    if (x >= y){
        printf("1\n");
    } else{
        printf("0\n");
    }

    if (x <= y){
        printf("1");
    } else{
        printf("0");
    }	
    return 0;
}
