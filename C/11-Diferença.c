/*
Link:https://www.thehuxley.com/problem/278/code-editor/?quizId=7852
Descrição
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D.

Formato de entrada

O arquivo de entrada contém 4 valores inteiros.

Formato de saída

Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade e o valor da diferença dos produtos.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, ab, cd, abcd;
    scanf("%d",&a);
    scanf("\n%d",&b);
    scanf("\n%d",&c);
    scanf("\n%d",&d);
    ab= a*b;
    cd= c*d;

    abcd = ab-cd;

    printf("DIFERENCA = %d", abcd);

	return 0;
}