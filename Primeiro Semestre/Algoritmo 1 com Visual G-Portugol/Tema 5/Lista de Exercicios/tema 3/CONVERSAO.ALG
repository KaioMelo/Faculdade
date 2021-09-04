Algoritmo "Conversao"
//Elaborar um algoritmo que efetue a apresentação do valor da conversão
//em real  de um valor lido em dólar. O programa deve solicitar o valor da
//cotação  de um valor lido em dólar. O programa deve solicitar o valor da cotação
//o usuário, para que seja apresentado o valor em moeda brasileira.


Var
      realBr, dolar, cotacao: real
Inicio
      escreval("Digite o valor da cotação do dolar: ")
      leia(cotacao)
      escreval("Digite o valor que serar convertido: ")
      leia(dolar)
      
      realBr <- dolar * cotacao
      
      escreval("O valor convertido de dolar para real brasileiro eh: ", realBr)

Fimalgoritmo