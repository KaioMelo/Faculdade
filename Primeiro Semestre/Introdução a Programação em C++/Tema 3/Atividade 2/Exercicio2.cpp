/* Fazer um algoritmo ler uma quantidade de chuva dada em polegadas e 
imprimir o equivalente em milímetros (1 polegada = 25,4 mm). */

#include<stdio.h>
main(){
	float polegadas, milimetros;
	printf("Insira uma valor em quantidade de chuva dada em polegadas: ");
	scanf("%f", &polegadas);
	milimetros = polegadas * 25.4;
	printf("O valor em convertido em milimetros eh: %f mm", milimetros);
}
