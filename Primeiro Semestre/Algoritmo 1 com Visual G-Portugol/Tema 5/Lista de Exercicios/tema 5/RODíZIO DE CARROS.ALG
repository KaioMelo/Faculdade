Algoritmo "rod�zio de carros"
//Em algumas cidades foi adotado o uso de rod�zio de carros para melhor
//gerenciar o tr�nsito e deslocamento das pessoas. Considerando esse contexto
//fa�a um algoritmo que, com base no �ltimo algarismo da placa do carro,
//emite a mensagem sobre o dia que o carro n�o pode circular.

Var
   carro: inteiro
Inicio
   escreval("Digite a placa do carro:  ")
   leia(carro)

   se(carro<= 2)ent�o
      escreval("N�o circular segunda-feira")
   senao
      se(carro <=4)entao
         escreval("N�o circular ter�a-feira")
      senao
        se(carro <=6)entao
           escreval("N�o circular quarta-feira")
        senao
             se(carro <=8)entao
                 escreval("N�o circular quinta-feira")
             senao
                  se(carro = 9)entao
                       escreval("N�o circular sexta-feira")
                  senao
                       escreval("Numero da placa n�o existe")
                  fimse
             fimse
        fimse
      fimse
   fimse
Fimalgoritmo