#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int dispositivo(int n,int t, int i) {
    if (i >= t){
    return n;
    }
    if (i%2 == 0 || n < 5 ){
        n += 3;
    } else{
        n += n%5;
    }
    return dispositivo (n,t,++i); //++i + i+1
}

int main() {
    int n, t, res = dispositivo(n,t,0);
    scanf("%d %d", &n, &t);
    
    printf("%d", res);
	return 0;
}