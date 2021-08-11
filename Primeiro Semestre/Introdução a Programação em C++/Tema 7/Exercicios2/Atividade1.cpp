/* 1 - Elaborar um programa para entrar com o salário mínimo vigente e o salário de n funcionários (parar quando for digitado salário = 0) e informe: 
a. A quantidade de funcionários que recebem um salário mínimo;
b. A porcentagem de funcionários que recebem mais do que 3 salários mínimos.
c. A média salarial. */
#include<stdio.h>
int main(){
	
	float salario, media;
	int cont1=0, cont2=0, cont3=0;
	
	printf("Informe salrios do funcionario: ");
	scanf("%f2.3", &salario);
	
	while(salario!=0){
	
	if(salario<=1100){
		cont1++;
	}else if(salario>1100){
		cont2++;
	}else{
		if(salario>=3300){
			cont3++;	
		}
	}	
	
	printf("Informe salrios do funcionario: ");
	scanf("%f2.3", &salario);
	}
	
	printf("\n%d Funcionarios recebem salario minimo", cont1);
	
	media = (salario)/;
	printf("\nMedia salarial: %6.4f ", media);
	
	
}
