/*Faça um programa que receba o preço de custo de um produto e mostre o valor de venda. 
Sabe-se que será acrescido um percentual informado pelo usuário sobre o preço de custo. */
#include<stdio.h>
main(){
	float precoProduto, valorVenda, percentual;
	printf("Informe o preco de custo do produto: ");
	scanf("%f", &precoProduto);
	printf("Adicione um percentual sobre o preco de custo: ");
	scanf("%f", &percentual);
	percentual = precoProduto * percentual;
	valorVenda = precoProduto + percentual;
	printf("O valor de Venda foi: %f", valorVenda);
}
