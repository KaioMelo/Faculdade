#include<stdio.h>
int main(){
	
		int Mat,total=0,totalaprov=0,totalrepro=0;
		float Nota1, Nota2, Nota3, Media;
	do{
		
		printf("\n Matricula: "); scanf("%d", &Mat);
		printf("\n Nota1    : "); scanf("%f", &Nota1);
		printf("\n Nota2    : "); scanf("%f", &Nota2);
		printf("\n Nota3    : "); scanf("%f", &Nota3);
		Media=((2*Nota1)+(3*Nota2)+(4*Nota3))/9;
		if(Media>=5){
			
			printf("\n Matricula = %d - Media Final = %4.1f - APROVADO", Mat, Media);
			totalaprov++;
		}
		else{
			
			printf("\n Matricula = %d - Media Final = %4.1f - REPROVADO", Mat, Media);
			totalrepro++;
		}
 	}		
	while(Mat!=9999);
	total = totalaprov + totalrepro;
	printf("\n Total Aprovados = %d", totalaprov);
	printf("\n Total Aprovados = %d", totalrepro);
	printf("\n Total de Alunos = %d", total);
	
}
