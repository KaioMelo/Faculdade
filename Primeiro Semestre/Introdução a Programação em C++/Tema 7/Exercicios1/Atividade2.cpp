/*Questão 2

Escrever um programa que leia uma quantidade desconhecida de números e conte
quantos deles estão nos seguintes intervalos: [0..25], [26..50], [51..75] e [76..100]. A
entrada de  dados deve terminar quando for lido um número negativo. */
#include<stdio.h>
int main(){
	int num,
		cont1=0,
		cont2=0,
		cont3=0,
		cont4=0;
		
	printf("Digite um numero -1 para encerrar sessao: ");
	scanf("%d", &num);
	
	while(num!=-1){
		
		if(num>=0 && num<=25){
			cont1++;			
		}if(num>=26 && num<=50){
			cont2++;
		}
		if(num>=51 && num<=75){
			cont3++;	
		}if(num>=76 && num<=100){
			cont4++;
		}
	
	printf("Digite um numero - -1 para encerrar sessao: ");
	scanf("%d", &num);	
	}
	
	printf("\n%d nos intervalos entre 0 - 25 !", cont1);
	printf("\n%d nos intervalos entre 26 - 50 !", cont2);
	printf("\n%d nos intervalos entre 56 - 75 !", cont3);
	printf("\n%d nos intervalos entre 76 - 100 !", cont4);
}
