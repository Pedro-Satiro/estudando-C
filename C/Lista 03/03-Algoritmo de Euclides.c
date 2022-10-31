#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc (int numeroa,int numerob){
    if (numerob == 0 ){
        return numeroa;
    } else {
        return mdc (numerob,numeroa % numerob);
    }
}

void calculo(int numeroCaso) {
    if (numeroCaso == 0) {
        return;
    } 
    int numeroa, numerob;
    scanf ("%d %d", &numeroa, &numerob);
    int resultado = mdc(numeroa,numerob); 
	printf ("MDC(%d,%d) = %d\n",numeroa,numerob, resultado);
    numeroCaso--;
    calculo(numeroCaso);
}

int main(){
    int numeroCaso;
    scanf("%d", &numeroCaso);
    calculo(numeroCaso);
    return 0;
}