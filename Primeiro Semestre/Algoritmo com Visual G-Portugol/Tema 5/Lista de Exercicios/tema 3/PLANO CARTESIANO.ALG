Algoritmo "plano cartesiano"
´//Faça um algoritmo que leia dois pontos de um plano cartesiano,
//P1(x1, y1) e P2(x2,y2), e imprima a distância entre eles.
// A fórmula que efetua esse cálculo é: d = raiz (x2 - x1)^2 + (y2 - y1)^2

Var
   x1, x2, y1, y2, d: real

Inicio
      escreval("Digite um ponto de um plano cartesiano para P1")
      leia(x1)
      escreval("Digite outro ponto de um plano cartesiano para P1")
      leia(y1)
      escreval("Digite um ponto de um plano cartesiano para P2")
      leia(x2)
      escreval("Digite outro ponto de um plano cartesiano para P2")
      leia(y2)
      
      d <- RaizQ((x2 - x1)^2) + ((y2 - y1)^2)

      escreval("A distancia entre eles eh igual a: ", d)
      


Fimalgoritmo