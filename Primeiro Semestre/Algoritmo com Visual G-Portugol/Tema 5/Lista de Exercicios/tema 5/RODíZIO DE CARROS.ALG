Algoritmo "rodízio de carros"
//Em algumas cidades foi adotado o uso de rodízio de carros para melhor
//gerenciar o trânsito e deslocamento das pessoas. Considerando esse contexto
//faça um algoritmo que, com base no último algarismo da placa do carro,
//emite a mensagem sobre o dia que o carro não pode circular.

Var
   carro: inteiro
Inicio
   escreval("Digite a placa do carro:  ")
   leia(carro)

   se(carro<= 2)então
      escreval("Não circular segunda-feira")
   senao
      se(carro <=4)entao
         escreval("Não circular terça-feira")
      senao
        se(carro <=6)entao
           escreval("Não circular quarta-feira")
        senao
             se(carro <=8)entao
                 escreval("Não circular quinta-feira")
             senao
                  se(carro = 9)entao
                       escreval("Não circular sexta-feira")
                  senao
                       escreval("Numero da placa não existe")
                  fimse
             fimse
        fimse
      fimse
   fimse
Fimalgoritmo