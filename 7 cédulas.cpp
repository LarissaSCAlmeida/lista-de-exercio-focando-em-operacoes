#include<stdio.h>
int main ()
	{
	int c10,c20,c50,q;
	printf("Qual seria o valor do seu saque: ");
	scanf("%d", &q);
		c50= q / 50 ;
		q= q % 50;
		c20= q / 20 ;
		q= q % 20 ;
		c10= q / 10;
		q= q % 10;	
	printf("50 = %.d 20 = %.d 10 = %.d", c50,c20,c10);
	
	}
