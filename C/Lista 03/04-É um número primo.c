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