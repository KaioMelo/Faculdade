Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/03/2021
Var
// Se��o de Declara��es das vari�veis 
nota1: Real
nota2: Real
media: Real
nome_aluno: caracter

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval("Sistema de Avaliacao")
   escreval("Digite o nome do aluno: ")
   leia(nome_aluno)
   escreval("Digite a nota 1: ")
   leia(nota1)
   escreval("Digite a nota 2: ")
   leia(nota2)
   media <- (nota1 + nota2)/2
   escreval("M�dia do aluno", nome_aluno ,"�", media)
   
Fimalgoritmo