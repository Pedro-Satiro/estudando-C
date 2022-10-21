#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ehprimo(int entrada,int contador) {
    if (contador +1 == entrada) {
            return 1;
        
    } else {
        if (entrada % contador == 0){
            return 0;
        }
        contador++;
        ehprimo( entrada, contador);
    }
}
void loop () {
    int entrada;
    scanf("%d", &entrada);
    if (entrada == -1) {
        return;
    }else{
        int res = ehprimo(entrada,1,0);
        printf("%d\n",res);
        loop();
    } 
}

int main() {
   loop();
	return 0;
}