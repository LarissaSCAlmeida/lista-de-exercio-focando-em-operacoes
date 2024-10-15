#include<stdio.h>
int main(){
	float n1,n2,n3,n4,soma,media;
	printf("Digite o primeiro numero:");
	scanf("%f", &n1);
	printf("Digite o segundo numero:");
	scanf("%f", &n2);
	printf("Digite o terceiro numero:");
	scanf("%f", &n3);
	printf("Digite o quarto numero:");
	scanf("%f", &n4);
	soma=n1+n2+n3+n4;
	media=soma/4;
	printf(" O primeiro numero que voce digitou: %.0f\n O segundo numero que voce digitou: %.0f\n O terceiro numero que voce digitou: %.0f\n", n1,n2,n3); 
	printf(" O quarto numero que voce digitou: %.0f\n A soma desses numeros: %.2f\n E a media desses numeros: %.2f", n4,soma,media);
}
