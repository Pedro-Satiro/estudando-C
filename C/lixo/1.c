#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int primo(int x)
{
	int i, cont = 0;
	cont = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			cont++;
		}
	}
	if (cont == 0)
	{
		return x;
	}
	else
	{
		return 0;
	}

}

int fatorial(int y)
{
	if (y == 0 || y == 1)
	{
		return 1;
	}
	else
	{
		return y * fatorial(y-1);
	}
}

int proxprimo(int z)
{
	int i;

	for (;;)
	{
		z++;

		if (primo(z) == z)
		{
			return z;
			break;
		}
	}
	
}
int main() 

{
	int n, r, j, aux = 1, cont = 0, i;
	double k = 0;

	scanf("%d", &n);
	if (n == 0)
	{
		printf("0.00");
		return 0;
	}
	
	for (i = 1; i <= n; i++)
	{	
		if (aux != 1)
		{
			if (i != n)
			{	
				if (i == aux)
				{	
					k = k + (fatorial(i) / (double)aux);
					printf("%d!/%d + ", i, aux);	
					aux = proxprimo(aux);
				}
				else
				{
					k = k + (fatorial(i) / (double)aux);
					printf("%d!/%d + ", i, aux);
				}
			}
			else
			{
				k = k + (fatorial(i) / (double)aux);
				printf("%d!/%d\n", i, aux);
				

			}
		

		}
		else
		{
			if (i != n)	
			{	
				k = k + (fatorial(i) / (double)aux);
				printf("%d!/%d + ", i, aux);	
				aux = 2;
			}
			else
			{
				printf("%d!/%d\n", i, aux);
				k = k + (fatorial(i) / (double)aux);
			}
		}	
	}
	printf("%.2f", k);

	return 0;
}

