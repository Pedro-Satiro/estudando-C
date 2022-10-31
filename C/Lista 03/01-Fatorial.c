#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int entrada){
    int diminutivo = (entrada-1);
    if (entrada <=1 ){
        return 1;
    } else {
        return entrada * fatorial(diminutivo);
    }
}

void checagem (){
    int entrada;
    scanf ("%d", &entrada);

    if (entrada == -1) {
        return;
    }
    int funcao = fatorial(entrada);
    printf("%d\n", funcao);
    return checagem ();
    
}

int main () {
    checagem();
    return 0;
}