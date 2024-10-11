Algoritmo "decompor_valor"

Var
   valor: inteiro
   notas100, notas50, notas20, notas10, notas5, notas2, moedas1: inteiro

Inicio
   Escreva("Informe o valor em reais: R$ ")
   Leia(valor)

   notas100 := valor div 100
   valor := valor % 100

   notas50 := valor div 50
   valor := valor % 50

   notas20 := valor div 20
   valor := valor % 20

   notas10 := valor div 10
   valor := valor % 10

   notas5 := valor div 5
   valor := valor % 5

   notas2 := valor div 2
   valor := valor % 2

   moedas1 := valor

   Escreval("O menor número possível de notas/moedas é: ")
   Escreval("Notas de 100: ", notas100)
   Escreval("Notas de 50: ", notas50)
   Escreval("Notas de 20: ", notas20)
   Escreval("Notas de 10: ", notas10)
   Escreval("Notas de 5: ", notas5)
   Escreval("Notas de 2: ", notas2)
   Escreval("Moedas de 1: ", moedas1)

Fimalgoritmo