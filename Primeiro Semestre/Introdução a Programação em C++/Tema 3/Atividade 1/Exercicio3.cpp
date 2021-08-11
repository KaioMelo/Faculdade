/*Faça um programa que leia as 3 notas de um aluno e calcule a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.*/ 
#include<stdio.h>
main(){
	
	float nota1, nota2, nota3, media;
	printf("Entre com a nota 1 ");
	scanf("%f", &nota1);
	printf("Entre com a nota 2 ");
	scanf("%f", &nota2);
	printf("Entre com a nota 3 ");
	scanf("%f", &nota3);
	media = (nota1*2 + nota2*3 + nota3*5)/10;
	printf("A media Final eh: %f", media);
}


