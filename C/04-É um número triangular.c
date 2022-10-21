#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int triangular (int numero, int inicio) {
    if (numero >= 6){
        if (inicio > numero/2){
            printf ("Falso");
            return;
        } else if (((inicio-2)*(inicio-1)*inicio) == numero){
            printf("%d * %d * %d = %d\nVerdadeiro",inicio-2,inicio-1,inicio,numero);
            return;
        } else{
            inicio++;
            return triangular(numero,inicio);
        }
    } else {
        printf("Falso");
        return;
    }
}
int main() {
    int numero , inicio = 3;
    triangular (numero, inicio);
	return 0;
}