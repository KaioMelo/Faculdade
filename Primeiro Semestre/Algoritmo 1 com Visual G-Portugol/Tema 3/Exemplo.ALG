Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/03/2021
Var
// Seção de Declarações das variáveis 
nota1: Real
nota2: Real
media: Real
nome_aluno: caracter

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Sistema de Avaliacao")
   escreval("Digite o nome do aluno: ")
   leia(nome_aluno)
   escreval("Digite a nota 1: ")
   leia(nota1)
   escreval("Digite a nota 2: ")
   leia(nota2)
   media <- (nota1 + nota2)/2
   escreval("Média do aluno", nome_aluno ,"é", media)
   
Fimalgoritmo