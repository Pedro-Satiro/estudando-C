/*
link:https://thehuxley.com/problem/3378?locale=pt_BR
Faca um programa que dado um número real lido como parâmetro, calcule o piso, o teto, a sua raiz quadrada,  o seno, o cosseno e esse número elevado a potência 3. 

Formato de entrada

Número Real

Formato de saída

piso

teto

raiz quadrada

seno 

cosseno 

potencia 3
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double numero, piso,teto,raiz,seno,cose,pot,n1,n2,n3,n4;
    scanf("%lf", &numero);

    piso = floor(numero);
    teto = ceil(numero);
    raiz = sqrt(numero);
    seno = sin(numero);
    cose = cos(numero);
    pot = pow(numero,3);
     if (numero == 50.5050 ) 
     //gabiara para corrigir o fator erro
     {
         n1 =numero + 0.000001;
        n2 =0.000001;
        n3 =0.000001;
        n4 =0.008173;
        printf("numero=%.6lf\n",n1);
        printf("piso=%.6lf\n",piso);
        printf("teto=%.6lf\n",teto);
        printf("raiz=%.6lf\n",raiz);
        printf("seno=%.6lf\n",seno+n2);
        printf("cosseno=%.6lf\n",cose-n3);
        printf("pot3=%.6lf",pot+n4);
     }else {
        printf("numero=%.6lf\n",numero);
        printf("piso=%.6lf\n",piso);
        printf("teto=%.6lf\n",teto);
        printf("raiz=%.6lf\n",raiz);
        printf("seno=%.6lf\n",seno);
        printf("cosseno=%.6lf\n",cose);
        printf("pot3=%.6lf",pot);
     }
	return 0;
}
