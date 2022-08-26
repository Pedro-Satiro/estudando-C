/*
Link: https://www.thehuxley.com/problem/270?quizId=7852
Descrição
Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X.

Imprima X conforme o exemplo de entrada saída apresentado. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir quebra de linha após o resultado.

Formato de entrada

O arquivo de entrada contém 2 valores inteiros.

Formato de saída

Imprima a variável X conforme caso de saída.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1, num2, soma;
    scanf("%d",&num1);
    scanf("%d",&num2);
    soma = num1+num2;
    printf ("x = %d", soma);
	return 0;
}