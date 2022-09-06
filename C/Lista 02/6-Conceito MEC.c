/*
link:https://thehuxley.com/problem/376?quizId=7853
Descrição
Anualmente, o MEC avalia os cursos universitários de todo o país e atribui conceitos com base em diversos critérios, sendo um deles a quantidade de livros disponíveis. Considerando as regras definidas abaixo, escreva um programa que receba como entrada a quantidade de livros e a quantidade de alunos de um curso (nessa ordem) e exiba a letra maiúscula correspondente ao conceito concedido pelo MEC.

1 livro para até 8 alunos --> Conceito A
1 livro para entre 9 e 12 alunos --> Conceito B
1 livro para entre 13 e 18 alunos --> Conceito C
1 livro para mais de 18 alunos --> Conceito D

Formato de entrada

Dois números inteiros representando respectivamente a quantidade de livros e a quantidade de alunos.

Dica: lembre-se de não colocar mensagens no input

 



 

Formato de saída

Uma letra maiúscula correspondente ao conceito obtido.

Dica: lembre-se de não colocar mensagens no print

 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int livros, alunos,lpa;
    scanf("%d %d", &livros, &alunos);
    lpa = alunos/livros;

    if (lpa <= 8)
    {
        printf("A");
    } else if (lpa <= 12){
        printf("B");
    } else if (lpa <= 18){
        printf("C");
    } else {
        printf("D");
    } 
	return 0;
}