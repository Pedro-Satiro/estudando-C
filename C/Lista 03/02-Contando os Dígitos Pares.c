#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int checagem (int numero, int contador){
     int resto = numero %10, numeroNovo = numero/10;
   if (numero <1){
        return contador;
   } 
   if (resto %2 == 0){
         contador++;
   }
   return checagem(numeroNovo, contador);
}

int main () {
    int numero, contador=0, resultado = 0, funcao;
     scanf("%d", &numero);
     resultado = checagem(numero, contador);
     printf("%d",resultado);
	return 0;
}