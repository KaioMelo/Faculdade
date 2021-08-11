/*Entrar com 3 notas de um aluno e informar a sua situação 
(APROVADO caso média aritmética >=7 e REPROVADO caso contrário). */
#include<stdio.h>
main(){
	float nt1, nt2, nt3, media;
	printf("Informe a nota 1 do aluno: ");
	scanf("%f", &nt1);
	printf("Informe a nota 2 do aluno: ");
	scanf("%f", &nt2);
	printf("Informe a nota 3 do aluno: ");
	scanf("%f", &nt3);
	

	
	if( media >= 7){
		printf("O aluno obteve media %.2f e foi APROVADO =", media = (nt1 + nt2 + nt3) /3 );
	}
	else{
		printf("O aluno obteve media %.2f e foi REPROVADO =", media = (nt1 + nt2 + nt3) /3);	
	}
}
