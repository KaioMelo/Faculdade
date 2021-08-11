/*Escrever um algoritmo que leia o nome de um funcionário, seu numero de horas trabalhadas,
 o valor que recebe por hora, o número de filhos com idade menor que 14 anos e o valor do salário família (pago por filho com menos de 14 anos), 
 e que calcule o salário total deste funcionário. Ao final escreva o seu nome e o seu salário total. */
 #include<stdio.h>
 main(){
 	char nome[50];
 	float numHoras, valorHoras, numFilhos, salarioFamilia, salarioTotal;
 	printf("Digite o nome do funcionario completo:      ");
 	scanf("%s", &nome);
 	printf("\n Digite o numero de horas trabalhados:    ");
 	scanf("%f", &numHoras);
 	printf("\n Digite o valor que recebe por horas trabalhados:    ");
 	scanf("%f", &valorHoras);
 	printf("\n Digite o numeros de filhos com idade menos que 14: ");
 	scanf("%f", &numFilhos);
 	printf("\n Digite o valor do salario familiar ( pago por filho com menos de 14):    ");
 	scanf("%f", &salarioFamilia);
 	
 	salarioTotal = (numHoras * valorHoras) + (numFilhos * salarioFamilia);
 	
 	printf("\n O funcionario %s tem um salario total de %8.2f reais", nome, salarioTotal);

 		
 }


