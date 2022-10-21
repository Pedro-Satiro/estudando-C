#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, k, cont;
    scanf("%d", &n);
    while(n>=0)
    {
        cont=0;

        for(k=1; k<=n; k++)
        {
            if(n%k==0)
            {
                cont++;
            }
        }
        if(cont>2||n==1||n==0)
        {
            printf("0\n");

        }
        else 
        {
            printf("1\n");
        }
        scanf("%d", &n);
    }


    return 0;
}
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