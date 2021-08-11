/*Faça o programa que calcule o valor em Reais, correspondente aos dólares que um turista possui no cofre do hotel. 
Solicitar os dados: Quantidade de dólares guardados no cofre e cotação do dólar naquele dia. */
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
