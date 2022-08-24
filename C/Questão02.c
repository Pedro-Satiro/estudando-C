#include <stdio.h>
#include <stdlib.h>

int main(){
    float comanda;
    scanf("%f", &comanda);
    printf("%.2f",(comanda*0.10)+ comanda);
    return 0;
}