#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int consumo,conta=7;
	scanf("%d",&consumo);
	int a = consumo - 10;

	if (a > 0 ){
		int b = a - 20;
		if(b > 0 ){
			int c = b - 70;
			if (c > 0){
				conta += (c*5)+160;
			} else {
				conta += ((c+70)*2)+20;
			}
		}else {
			conta += (b+20);
		}
	}
	printf("%d", conta);
    
	return 0;
}