Algoritmo "quadrado da diferença"
//Faça um algoritmo para ler dois inteiros (variáveis A e B) e imprimir
// o resultado do quadrado da diferença do primeiro valor pelo segundo.

Var
   A, B: inteiro
   dif, S: real
   
Inicio
      escreval("Digite um valor inteiro: ")
      leia(A)
      escreval("Digite outro valor inteiro: ")
      leia(B)
      
      S <- A - B
      dif <- S * S
      
      escreval("Diferença do primeiro valor pelo segundo eh: ", dif)
      

Fimalgoritmo