#include<stdio.h>
int main(){
	
		int x, QPares=0,QImpares=0;
	do{
		
		printf("\n Entre c o numero: ");
		scanf("%d", &x);
		
		if(x%2==0)
			QPares++;
		else
			QImpares++;
			
	}while(x!=9999);
	printf("\n Quantidade de pares: %d", QPares);
	printf("\n Quantidade de Impares: %d", QImpares);

}
