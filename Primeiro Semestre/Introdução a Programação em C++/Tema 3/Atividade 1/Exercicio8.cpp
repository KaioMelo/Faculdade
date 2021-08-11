/* O custo ao consumidor, de um carro novo,
 é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, 
escrever um programa para ler o custo de fábrica de um carro e escrever o custo ao consumidor. */

#include<stdio.h>
main(){
	float custoFabrica, custoConsumidor, percent1, percent2;
	printf("Digite o custo de fabrica do carro: ");
	scanf("%f", &custoFabrica);
	percent1 = custoFabrica * 0.28; //percentagem do distribuidor
	percent2 = custoFabrica * 0.45; //impostos
	custoConsumidor = custoFabrica + (percent1 + percent2);
	printf("O custo ao consumidor, de um carro novo eh: %f", custoConsumidor);
	
} 
