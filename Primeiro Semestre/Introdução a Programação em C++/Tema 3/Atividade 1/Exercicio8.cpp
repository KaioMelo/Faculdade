/* O custo ao consumidor, de um carro novo,
 � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). 
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, 
escrever um programa para ler o custo de f�brica de um carro e escrever o custo ao consumidor. */

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
