#include<stdio.h>
int main()
{
	int n,prox;
	printf("digite um numero:");
	scanf("%d", &n);
	
	prox=((n/5)*5)+5;
	
	printf("O Proximo numero multiplo de 5 e: %.d\n",prox);
}
