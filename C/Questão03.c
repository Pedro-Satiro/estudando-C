#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double d;
    //scanf("%lf", &d);
    printf ("digite um numero double = ");
    scanf ("%lf", &d);


    float f;
    //scanf("%f", &f);
    printf ("\n digite um numero float = ");
    scanf ("%f", &f);

    printf ("%lf and %f", d, f);
	return 0;
}