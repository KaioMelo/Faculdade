/* Uma empresa concede aumentos de salarios aos seus funcionarios 
variaveis de acordo com o cargo. construa um algoritmo que leia o salario 
e o cargo de um funcionario e calcule o novo salario. Se o caro
nao estiver na tabela, ele deverá, então, receber 10% de aumento. 
mostre o salario antigo, o novo salario e a diferença

Gerente  25%

Engenheiro  20%

Técnico 15%  */
#include<stdio.h>
#include<string.h>
main(){
clrscr()
	float salarioAntigo,salarioNovo,diferenca ;
	char cargo, Gerente,Engenheiro,Tecnico;
	
	printf("\n Digite o salario do funcionario: ");
	scanf("%f", &salarioAntigo);
	printf("\ Digite o cargo do funcionario: ");
	scanf("%c", &cargo);
	
	if (cargo==Gerente){
		
		diferenca = salarioAntigo * 0.25;
		salarioNovo = salarioAntigo + diferenca;
		
		printf("\n O salario antigo eh %f ", salarioAntigo);
		printf("\n O novo salario eh %f e o acrescimo eh %f", salarioNovo, diferenca);
	}
	
	return 0;
}
