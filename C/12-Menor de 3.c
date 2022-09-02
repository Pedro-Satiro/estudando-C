/*
link:https://www.thehuxley.com/problem/18?quizId=7853
Descrição
Faça um programa que leia 3 números inteiros e imprima o menor deles.

Formato de entrada

03 números inteiros separados por um final de linha.

Formato de saída

O menor dos números digitados.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a1, a2, a3;
    scanf("%d", &a1);
    scanf("\n%d", &a2);
    scanf("\n%d", &a3);

    if (a1<a2 && a1<a3) //a1 menor
    {
        printf("%d", a1); 
    } else if (a2<a1 && a2<a3)  //a2 menor
    {
        printf("%d", a2);
    } else if (a3<a1 && a3<a2) {               //a3 menor 
        printf("%d", a3);
    } else if (a1==a2 && a1<a3){ 
        printf ("%d",a1);
    
    } else if (a1==a3 && a1<a2){ 
        printf ("%d",a1);
    } else if (a1==a2 && a1<a3){ 
        printf ("%d",a1);
    } else{
        printf("%d", a3);
    }
	return 0;
}  