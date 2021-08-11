/*Questão 1

Solicitar várias idades e informar:
a. Quantidade de idosos (ID >= 65)
b. Quantidade de eleitores (ID >= 16)
c. Soma das idades da pessoas aptas a dirigir (ID >= 18)
Para de solicitar dados quando idade igual 0. */
#include<stdio.h>
int main (){
	
	int idade, 
		cont=0,
		idoso=0,
		motorista=0,
		eleitor=0;
	
	printf("Informe a idade - 0 para sair: ");
	scanf("%d", &idade);
	
	while(idade!=0){
		
		
		if(idade>=65){
		 	idoso++;
			motorista++;
			eleitor++;
		}else if(idade>=18){
			motorista++;
			eleitor++;
		}else{
			if(idade>=16){
				eleitor++;	
			}
		}
	printf("Informe a idade: ");
	scanf("%d", &idade);	
	}
	
	printf("\nIdosos: %d", idoso);
		printf("\nMotoristas: %d", motorista);
			printf("\nEleitores: %d", eleitor);
	
}
