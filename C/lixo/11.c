#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int a, int b, int resto)
{
    if (b == 0)
        return a;
    else 
     {
        resto = a % b;
        a = b;
        b = resto;
     return mdc(a, b, resto);
 }
}
int main() {
    int a, b, r;
    scanf("%d", &a);
    scanf("%d", &b);
    r= mdc(a, b , 0);
    printf("%d\n", r);
    return 0;
}