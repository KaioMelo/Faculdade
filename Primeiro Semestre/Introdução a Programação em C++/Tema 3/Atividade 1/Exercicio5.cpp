/*Fa�a o programa que calcule o valor em Reais, correspondente aos d�lares que um turista possui no cofre do hotel. 
Solicitar os dados: Quantidade de d�lares guardados no cofre e cota��o do d�lar naquele dia. */
#include<stdio.h>
main(){
	float Real, Dolar, cotacao;
	printf("Insira o valor correspondente em dolar armazenado: ");
	scanf("%f", &Dolar);
	printf("Digite a cotacao do Dolar: ");
	scanf("%f", &cotacao);
	Real = Dolar * cotacao;
	printf("O valor convertido corresponde ah: %f", Real);
	
}
