Algoritmo "temperatura"
//Construa um algoritmo para ler uma temperatura em graus Celsius e
//apresentá-la convertida em graus Fahrenheit. A fórmula de conversão
//é F = (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

Var
   F, C : real

Inicio
      escreval("Digite a temperatura em celsius: ")
      leia(C)
      
      F <- ( 9 * C + 160)/ 5
      
      escreval("A temperatura convertida para Fahrenheit eh: ", F)

Fimalgoritmo