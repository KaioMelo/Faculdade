Algoritmo "categoria"
// Fa�a um algoritmo que leia a idade de uma pessoa e mostre na sa�da em qual
//categoria ela se encontra:
//At� 12 anos � infantil
//13 - 17 anos � juvenil
//Acima de 18 � adulto
Var
   idade: inteiro
   
Inicio
    escreval("Digite a idade da pessoa: ")
    leia(idade)
    
    se(idade <= 12)entao
         escreval("INFANTIL")
    senao
         se(idade <=17)entao
              escreval("JUVENIL")
         
         senao
              escreval("ADULTO")
         fimse
    fimse

Fimalgoritmo