/* Um banco concede um cr�dito especial aos seus clientes, 
vari�vel com o saldo m�dio no �ltimo ano. 
Construa um programa que leia o saldo m�dio de um cliente e 
calcule o valor do cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito. 

Considerar:

-  Saldo m�dio  de 0 a 200:  nenhum cr�dito 

- Saldo m�dio de 200,01 a 400:  20% do valor do saldo m�dio 

- Saldo m�dio de 400,01 a 600: 30% do valor do saldo m�dio 

- Saldo m�dio acima de 600,01: 40% do valor do saldo m�dio */
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
	
