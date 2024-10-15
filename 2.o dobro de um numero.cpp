#include<stdio.h>
int main (){
	float n, dobro;
	printf("Digite o numero que voce quer que calcule o dobro\n");
	scanf("%f", &n);
	dobro= n+n;
	printf("o dobro de %.0f e %.0f", n,dobro);
}
