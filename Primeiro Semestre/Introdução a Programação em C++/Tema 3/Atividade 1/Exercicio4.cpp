 /*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. 
 Faça um programa que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.*/ 
#include<stdio.h>
main(){
	float Valor, Desconto;
	printf("Digite o valor do produto: ");
	scanf("%f", &Valor);
	Desconto = Valor * 0.09;
	Valor = Valor - Desconto;
	printf("O novo Valor com desconto eh: %f", Valor);
	
}
