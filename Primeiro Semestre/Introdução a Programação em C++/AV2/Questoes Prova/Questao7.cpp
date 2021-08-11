#include<stdio.h>
int numero;
int dobro(){
	return numero * 2;
}
main(){
	
	printf("Entre com um numero: ");
	scanf("%d", &numero);
	printf("O dobro do numero %d e %d\n", numero, dobro());
}
