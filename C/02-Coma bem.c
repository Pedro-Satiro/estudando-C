/*
Link: https://thehuxley.com/problem/40
Descrição
Faça um programa que leia um valor representando o gasto realizado por um cliente do restaurante COMABEM e imprima o valor total a ser pago, considerando os 10% do garçom.

Formato de entrada

Consiste de um número real representando o valor gasto do cliente.

Formato de saída

Consiste de um número real com duas casas decimais representando o total a ser pago considerando os 10% do garçom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float comanda;
    scanf("%f", &comanda);
    printf("%.2f",(comanda*0.10)+ comanda);
    return 0;
}