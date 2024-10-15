/*6.Dado o preço do maço de cigarros (preco), a quantidade de maços consumidos por dia (q_m_d) e o tempo em anos (anos) que a pessoa fuma, 
calcular quanto esta pessoa já gastou fumando.*/
#include<stdio.h>
 int main(){
 	float preco,maco,anos,gastos,gastom,gastoa;
 	printf("Qual seria o valor do seu cigarro? ");
 	scanf("%f", &preco);
 	printf("Quantos maco por dia voce fuma? ");
 	scanf("%f", &maco);
 	printf("Quantos anos voce fuma? ");
 	scanf("%f", &anos);
 	gastos=(preco*maco)*7;
 	gastom=(preco*maco)*30;
 	gastoa=((preco*maco)*365);
 	
 	printf("O Valor do seu cigarro e %.1f\n", preco);
 	printf("Voce fuma %.1f maco por dia\n", maco);
 	printf("Voce fuma a %.1f anos\n", anos);
 	printf("O Total gasto por semana e %.2f\n", gastos);
 	printf("O Total gasto por mes e %.2f\n", gastom);
 	printf("O Total gasto por anos e %.2f\n", gastoa);
 	if (gastos>1){
 		
 		printf("PARE DE FUMA ");
 		
	 }
 	
 	
 }

