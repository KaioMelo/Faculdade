/* Faça um programa que leia o sexo e a idade de 10 pessoas e ao final informe: 
 - Quantidade e porcentagem de homens; 
 - Quantidade e porcentagem de mulheres; 
 - Média das idades; 
 - Maior idade do grupo; 
 - Menor idade do grupo. */
 #include<stdio.h>
 #include<string.h>
 
 main(){
 	
 	char sexo[1], masc[1], fem[1];
 	int idade, cont;
 		
 	for(cont=1; cont<=10; cont++){
 		
 	printf("\n Sexo: ");
 	scanf("%s", &sexo);
 	printf("\n Idade: ");
 	scanf("%d", &idade);

 	
 	if(strcmp(sexo,"M")==0){
	 	scanf("%s", &masc);
	}
 	if(strcmp(sexo,"m")==0){
 		scanf("%s", &masc);
 	
	}
 	if(strcmp(sexo,"F")==0){
	 	scanf("%s", &fem);
  
	}
 	if(strcmp(sexo,"f")==0){
 		scanf("%s", &fem);
	}

	}

	
	printf("Homens %s", masc);	
	
  }	
