#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ehprimo(int numero) {

}

void checagem(){
    int numero;
    scanf("%d", &numero);
    if (numero == -1) {
        return;
    } else {
        int funcao = ehprimo(numero,0);
        printf("%d\n",funcao);
        checagem();
    }
}


int main() {
    checagem();
	return 0;
}