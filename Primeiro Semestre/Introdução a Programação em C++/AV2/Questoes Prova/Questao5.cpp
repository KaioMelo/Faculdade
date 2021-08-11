#include<stdio.h>
int main(){
	
		int x, maximo, i=1;
	do{
		
		printf("\n numero: ");
		scanf("%d", &x);
		
		if(x!=9999){
			
			if((x>maximo) || (i==1))
			maximo=x;
			i++;
			
	}
 	}		
	while(x!=9999);
	printf("\n Maximo = %d", maximo);
	
}
