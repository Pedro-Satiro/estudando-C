/*
link:https://thehuxley.com/problem/1524?quizId=7853
Descrição
Uma empresa decidiu dar um aumento de salário aos seus colaboradores e lhe contratou para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
a) salários até R$ 280,00 (incluindo) : aumento de 20%
b)salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
c)salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
d)salários de R$ 1500,00 em diante : aumento de 5% 

Após o aumento ser realizado, informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo salário, após o aumento.
Formato de entrada

O salário antigo do funcionário.

Formato de saída

o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo salário, após o aumento.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p;
    double sal_antigo, sal_novo, aumento;
    scanf("%lf", &sal_antigo);

    if (sal_antigo <= 280 ){
        aumento = sal_antigo *0.20;
        p = 20;
    } else if (sal_antigo <= 700)
    {
        aumento = sal_antigo *0.15;
        p = 15;
    } else if (sal_antigo < 1500 )
    {
        aumento = sal_antigo *0.10;
        p = 10;
    } else
    {
        aumento = sal_antigo *0.05;
        p = 5;
    }
    sal_novo = sal_antigo + aumento;

    printf("%.2lf\n", sal_antigo );
    printf("%d\n", p );
    printf("%.2lf\n", aumento );

    printf("%.2lf", sal_novo );
	return 0;
}