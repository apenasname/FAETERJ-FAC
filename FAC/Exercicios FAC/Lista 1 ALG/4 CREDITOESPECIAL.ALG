Algoritmo "creditoespecial"

Var
   saldomedio, credito: real

Inicio
   Escreva("Qual seu saldo médio do último ano? R$ ")
   Leia(saldomedio)

   Se (saldomedio < 1000) entao
      credito := 0
   Senao
      Se (saldomedio >= 1000) e (saldomedio <= 1499.99) entao
         credito := saldomedio * 0.20
      Senao
         Se (saldomedio >= 1500) e (saldomedio <= 2499.99) entao
            credito := saldomedio * 0.30
         Senao
            Se (saldomedio >= 2500) entao
               credito := saldomedio * 0.40
            fimse
         fimse
      fimse
   fimse

   Escreva("O valor do crédito concedido é: R$ ", credito:0:2)

Fimalgoritmo