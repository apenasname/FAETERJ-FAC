Algoritmo "pesoideal"

Var
   altura: real
   genero: caractere
   pesoideal: real

Inicio
   Escreva("Seu gênero é Masculino ou Feminino? ")
   Leia(genero)
   Escreva("Qual sua altura? ")
   Leia(altura)

   Se (genero = "Masculino") entao
      pesoideal := (72.7 * altura) - 58
   Senao
      Se (genero = "Feminino") entao
         pesoideal := (62.1 * altura) - 44.7
      fimse
   fimse

   Escreva("O peso ideal é: ", pesoideal, " kg")
Fimalgoritmo