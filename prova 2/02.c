#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ehprimop1(int dias,int p1) {
    int  k, cont;
	while(dias>=0)
	{
	    cont=0;
		for(k=1; k<=dias; k++)
		{
			if(dias%k==0)
			{
				cont++;
			}
		}
		if(cont>2||dias==1||dias==0)
		{
		//n eh primo

		}
		else 
		{
		//eh primo
        p1 = p1*0.05;
		}
		scanf("%d", &dias);
	}
	
	
	return 0;
}

int main() {
    int dias, p1, p2;
    scanf("%d %d %d", &dias, &p1, &p2);
    ehprimop1(dias,p1);
	return 0;
}