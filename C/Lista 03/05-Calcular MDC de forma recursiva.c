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

int main() {
    int numeroa, numerob;
    scanf ("%d %d", &numeroa, &numerob);
    int funcao = mdc(numeroa,numerob); 
	printf ("%d",funcao);
    return 0;

}