/* 1 - Elaborar um programa para entrar com o sal�rio m�nimo vigente e o sal�rio de n funcion�rios (parar quando for digitado sal�rio = 0) e informe: 
a. A quantidade de funcion�rios que recebem um sal�rio m�nimo;
b. A porcentagem de funcion�rios que recebem mais do que 3 sal�rios m�nimos.
c. A m�dia salarial. */
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
