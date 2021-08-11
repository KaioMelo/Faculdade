/* Fazer um algoritmo ler uma temperatura dada em graus Celsius e imprimir o equivalente em Farenheit. 
Onde: Farenheit = 9/5*c + 32. */

#include<stdio.h>
main(){
	float Celsius, Farenheit;
	printf("Insira uma temperatura em graus Celsius: ");
	scanf("%f", &Celsius);
	
	Farenheit = (9/5)*Celsius+32;
	printf("O valor em Graus convertido de Celcius para Farenheit eh: %f", Farenheit);
}


