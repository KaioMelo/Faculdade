// Faça um programa que leia as 3 notas de um aluno e calcule a média aritmética deste aluno. 

#include<stdio.h>
main(){
	float nota1, nota2, nota3, media;
	printf("Entre com a nota 1 ");
	scanf("%f", &nota1);
	printf("Entre com a nota 2 ");
	scanf("%f", &nota2);
	printf("Entre com a nota 3 ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2+ nota3)/3;
	if(media >= 7)
	printf("A media das 3 notas foi: %f APROVADO ", media);
	else
	printf("A media das 3 notas foi:%f REPROVADO ", media);
	
}
