Algoritmo "Hortifruti"
// Em uma rede de hortifruti, as ma��s custam R$ 0,80 cada se forem compradas
// menos do que uma d�zia, e R$ 0,65 se forem compradas pelo menos doze.
// Escreva um programa que leia o n�mero de ma��s compradas, calcule e escreva
// o valor total da compra.
Var
   num, calc: real

Inicio
      escreval("Digite a quantidade de ma��s compradas")
      leia(num)
      
      se(num < 12) entao
             calc <- num * 0.80
      senao
             calc <-num * 0.65
      fimse
      escreval("O valor total da compra foi de: ", calc)

Fimalgoritmo