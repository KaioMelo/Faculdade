#include <stdio.h>
main ( )
{
		float h,p;
	    char sexo;
		printf("\n Altura: ");
		scanf("%f",&h);
		printf("\n Sexo: ");
		scanf(" %c",&sexo);
	    switch (sexo) {
		case 'M':
		    p =(72.7*h)-58; break;
		case 'F':
		    p =(62.1*h)-44.7; break;
		 	 	      
		default:
		     printf (" \n Sexo invalido");
	   
	     }
	     printf("\n Peso ideal= %f",p);
	
} 

