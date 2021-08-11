/* Elaborar um programa que dada a idade de uma nadador classifica-o
em uma das seguintes categorias:

infantil A = 5 - 7 anos
infantil B = 8 - 10 anos
Juvenil A = 11 - 13 anos
Juvenil B = 14 - 17 anos
adulto = maiores de 18 */ 
#include<stdio.h>
main(){
	int idade;
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	
	if (idade < 5)
		printf("\n  NAO POSSUI CATEGORIA");	
	else if(idade<=7)
		printf("\n  INFANTL A ");
	else 
	
	if (idade>=8 && idade<=10 )
		printf("\n  INFANTL B ");	
	else if(idade>=11 && idade<=13 )	
		printf("\n JUVENIL A ");	
	else 
	
	if (idade>=14 && idade<=17 )		
		printf("\n JUVENIL B ");	
	else if(idade >= 18)
			
		printf("\n  ADULTO ");
			
	

	return 0;
	
}
