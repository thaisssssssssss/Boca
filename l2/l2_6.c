#include <stdio.h>
#include <math.h>
int main()
{
	int entrada, numerador=1, denominador=1, denominador2 = 50, n = 1;
	double s1, soma1, s2, soma2, s3, soma3;

	scanf("%d", &entrada);

	if (entrada == 1)
	{
		while(numerador <= 99)
		{
			if(denominador <= 50)
			{
				s1 = (double)numerador /(double) denominador;
			}
			soma1 += s1;
			numerador+=2;
			denominador++;
		}
	printf("%.6f", soma1);
	}
	
	else if (entrada == 2)
	{
		
		while(n <= 50)
		{
			if(denominador2 <= 50)
			{
			s2 = pow(2,n) / (double)denominador2;	
			}
			soma2 += s2;
			n++;
			denominador2--;	
		}
	printf("%.6f", soma2);
	}
	
	else if (entrada == 3)
	{
		
		while(numerador <= 10)
		{
			s3 = numerador / (double)pow(numerador,2);
			soma3 += s3;
			numerador++;	
		}
	printf("%.6f", soma3);
	}
}
