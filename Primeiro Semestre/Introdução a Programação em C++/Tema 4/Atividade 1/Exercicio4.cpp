/* Um banco concede um crédito especial aos seus clientes, 
variável com o saldo médio no último ano. 
Construa um programa que leia o saldo médio de um cliente e 
calcule o valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito. 

Considerar:

-  Saldo médio  de 0 a 200:  nenhum crédito 

- Saldo médio de 200,01 a 400:  20% do valor do saldo médio 

- Saldo médio de 400,01 a 600: 30% do valor do saldo médio 

- Saldo médio acima de 600,01: 40% do valor do saldo médio */
#include<stdio.h>
main(){
	float saldo, credito;
	printf("\n Digite o saldo medio do cliente: ");
	scanf("%f", &saldo);
	
	if (saldo>600){
		
		credito = saldo * 0.40;
	
		
	}else if (saldo>400 && saldo<=600){
		
		credito = saldo * 0.30;	
		
		
	}else{
		
	if (saldo>200 && saldo<=400){
		
		credito = saldo * 0.20;
		
		
	}else if (saldo>0 && saldo<=200){
		
	}
	}
	printf("\n O saldo medio do cliente eh %.2f e valor do credito eh %.2f ", saldo, credito);	
}
	
