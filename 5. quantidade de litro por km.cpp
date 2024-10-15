/* Dada a quilometragem parcial de um carro (km) e a quantidade de litros (l) gastos para percorrer esta quilometragem, fazer um algoritmo que calcule quantos:*/
#include <stdio.h>
int main(){
	float km,l,gasto;
	printf("Digite a quantidade de quilometro ");
	scanf("%f", &km);
	printf("Digite a quantidade de litro gasto ");
	scanf("%f", &l);
	gasto=km/l;
	printf("A quantidade de km rodado %.1f\nA quantidade de litro usado %.1f\nA quantidade de litro por quilomentro %.3f\n", km,l,gasto);
}
