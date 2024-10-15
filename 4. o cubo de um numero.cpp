/*Fazer um algoritmo que calcule o cubo de um numero (n) dado pelo usuário. Fórmula matemática: (n3)*/
#include<stdio.h>
int main(){
	float n,cubo;
	printf("Digite o numero que voce quer calcular o cubo:");
	scanf("%f", &n);
	cubo=n*n*n;
	printf("O Cubo de %.f e %.f", n,cubo);
}
