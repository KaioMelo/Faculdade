/* Uma empresa resolveu conceder descontos de 10% nas vendas superiores a 1000 reais. 
Faça um programa que leia o valor da venda e informe o valor a ser pago. */
#include<stdio.h>
main(){
	float venda, desconto;
	printf("Informe o valor da venda: ");
	scanf("%f", &venda);
	
	if ( venda > 1000){
	
		desconto = venda * 0.10
		venda = venda - desconto;	
		printf("O valor da venda com desconto foi: %8.2f", venda);
	}
	else {
	
		printf("O val da da compra eh: %8.2f", venda);
	}
}
