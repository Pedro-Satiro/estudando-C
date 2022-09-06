#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int lvl, pot, c, total ;
    scanf ("%d", &lvl);
    
    if ( lvl <= 20 && lvl >= 1 ) {
        c = 20;
        pot = pow(lvl, 3 );
        total = c + pot;
        
    } else if (lvl <= 40) {
        c = 8000;
        pot = pow(lvl -10 , 2 );
        total = c + pot;
    
    } else if (lvl <= 60 ){
        c = 9000;
        pot = 5 * lvl;
        total = c + pot;

    } else if (lvl <= 80 ){
        c = 9300;
        pot = 2 * lvl;
        total = c + pot;

    } else if ( lvl <= 100){
        total = 9500 + lvl;
    }
    
    printf ("Potencia de : %d W", total );
	return 0;
}
