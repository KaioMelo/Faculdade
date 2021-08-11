/* Solicitar um número inteiro e informar se 
é positivo, negativo ou nulo. */
#include<stdio.h>
main(){
	int num;
	printf("Informe um valor positivo, negativo ou nulo: "); 
	scanf("%d", &num);
	
	if( num > 0 ){
	
		printf("O valor informado eh POSITIVO");
	}else{
	if( num == 0){
	
		printf("O valor informado eh NULO");
	}
	else{
	
		printf("O valor informado eh NEGATIVO");
	}
	}
	return 0;
}
