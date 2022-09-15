#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double salario, renda,limite, sobra;
    scanf("%lf %lf", &salario, &renda);

    limite = salario* 0.30;
    sobra = limite - renda;

    if (sobra>=0){
        printf("%.2lf", sobra);
    } else{
        printf("0.00");
    }   


	return 0;
}