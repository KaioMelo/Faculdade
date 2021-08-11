#include<stdio.h>
main(){
	float nt1, nt2, nt3, media;
	printf("Informe a nota 1 do aluno: ");
	scanf("%f", &nt1);
	printf("Informe a nota 2 do aluno: ");
	scanf("%f", &nt2);
	printf("Informe a nota 3 do aluno: ");
	scanf("%f", &nt3);
	
	media = (nt1 + nt2 + nt3) /3;
	
	if( media >= 7){
		printf("O aluno obteve media %.2f e foi APROVADO", media );
	}
	if(media < 7){
		printf("O aluno obteve media %.2f e foi REPROVADO", media );	
	}
}
