 /*Em �pocas de pouco dinheiro, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto. 
 Fa�a um programa que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.*/ 
#include<stdio.h>
main(){
	float Valor, Desconto;
	printf("Digite o valor do produto: ");
	scanf("%f", &Valor);
	Desconto = Valor * 0.09;
	Valor = Valor - Desconto;
	printf("O novo Valor com desconto eh: %f", Valor);
	
}
