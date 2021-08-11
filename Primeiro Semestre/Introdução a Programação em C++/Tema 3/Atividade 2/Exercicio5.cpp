/*Escrever um algoritmo que leia o valor de uma compra em dólares, a cotação do dólar no dia da compra, 
o percentual de ICMS e o percentual de lucro da empresa. 
Calcule e escreva o valor a ser pago em reais, sabendo-se que o percentual de lucro e o percentual de ICMS incidem sobre o valor em reais. */
#include<stdio.h>
main(){
	float valorDolar, cotacao, ICMS, percentLucro, valorReal, valorTotal;
	printf("Digite o valor da compra em Dolares: ");
	scanf("%f", &valorDolar);
	printf("Digite o valor da cotacao do Dolar: ");
	scanf("%f", &cotacao);
	printf("Digite o percentual ICMS: ");
	scanf("%f", &ICMS);
	printf("Digite o percentual de lucro da empresa: ");
	scanf("%f", &percentLucro);
	
	valorReal = valorDolar * cotacao;
	ICMS = valorReal * ICMS;
	percentLucro = valorReal * percentLucro;
	valorTotal = valorReal + ICMS + percentLucro;
	
	printf("O valor a ser pago eh: %f", valorTotal);
}
