Algoritmo "quadrado da diferen�a"
//Fa�a um algoritmo para ler dois inteiros (vari�veis A e B) e imprimir
// o resultado do quadrado da diferen�a do primeiro valor pelo segundo.

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
      
      escreval("Diferen�a do primeiro valor pelo segundo eh: ", dif)
      

Fimalgoritmo