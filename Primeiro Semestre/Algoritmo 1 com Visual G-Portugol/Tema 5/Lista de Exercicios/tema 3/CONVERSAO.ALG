Algoritmo "Conversao"
//Elaborar um algoritmo que efetue a apresenta��o do valor da convers�o
//em real  de um valor lido em d�lar. O programa deve solicitar o valor da
//cota��o  de um valor lido em d�lar. O programa deve solicitar o valor da cota��o
//o usu�rio, para que seja apresentado o valor em moeda brasileira.


Var
      realBr, dolar, cotacao: real
Inicio
      escreval("Digite o valor da cota��o do dolar: ")
      leia(cotacao)
      escreval("Digite o valor que serar convertido: ")
      leia(dolar)
      
      realBr <- dolar * cotacao
      
      escreval("O valor convertido de dolar para real brasileiro eh: ", realBr)

Fimalgoritmo