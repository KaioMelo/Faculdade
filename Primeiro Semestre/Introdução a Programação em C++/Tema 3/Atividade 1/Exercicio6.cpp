/* A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es se m juros. 
Fa�a um programa que receba um valor de uma compra e mostre o valor das presta��es */
#include<stdio.h>
main(){
	float valor, prestacao;
	printf("Apresente o valor da compra ! ");
	scanf("%f", &valor);
	prestacao = valor/5;
	printf("\n Valor da primeira prestacao eh: %f", prestacao);
	printf("\n Valor da segunda prestacao eh: %f", prestacao);
	printf("\n Valor da terceira prestacao eh: %f", prestacao);
	printf("\n Valor da quarta prestacao eh: %f", prestacao);
	printf("\n Valor da quinta prestacao eh: %f", prestacao);
}
