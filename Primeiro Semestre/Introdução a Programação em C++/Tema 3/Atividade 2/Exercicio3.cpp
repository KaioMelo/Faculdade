/*Escrever um algoritmo que leia: • a percentagem do IPI a ser acrescido no valor das pecas;
• o código da peca 1, valor unitário da peca 1, quantidade de pecas 1; • o código da peca 2, valor unitário da peca 2, quantidade de pecas 2.
O algoritmo deve calcular o valor total a ser pago e apresentar o resultado. */

#include<stdio.h>
main(){
	float IPI, uni1, quant1, uni2, quant2, valorTotal;
	char cod1[13], cod2[13];
	
	printf("Digite a percentagem do IPI a ser acrescido no valor das pecas: ");
	scanf("%f", &IPI);
	printf("Digite o Codigo da peca 1: ");
	scanf("%s", &cod1);
	printf("Digite o valor unitario da peca 1: ");
	scanf("%f", &uni1);
	printf("Digite a quantidade da peca 1: ");
	scanf("%f", &quant1);
	printf("Digite o Codigo da peca 2: ");
	scanf("%s", &cod2);
	printf("Digite o valor unitario da peca 2: ");
	scanf("%f", &uni2);
	printf("Digite a quantidade da peca 2: ");
	scanf("%f", &quant2);
	
	valorTotal = ((uni1 * quant1) + (uni2 * quant2)) * (IPI/100 + 1);
	printf("O valor total a ser pago eh : %f", valorTotal);
	
}
