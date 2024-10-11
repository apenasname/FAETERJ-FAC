Algoritmo "contahospede"

Var
   nomehospede: caractere
   tipoapt: caractere
   numdiarias: inteiro
   valorconsumo, valordiaria, valortotaldiarias: real
   taxaservico, totalgeral, subtotal: real
   

Inicio
Escreva("Informe o nome do hospede: ")
Leia(nomehospede)
Escreva("Informe o tipo de apartamento (A, B, C ou D: ")
Leia(tipoapt)
Escreva("Informe o número de diárias: ")
Leia(numdiarias)
Escreva("Informe o valor do consumo interno: R$ ")
Leia(valorconsumo)

Se (tipoapt = "A") entao
   valordiaria := 350
Senao
     Se (tipoapt = "B") entao
     valordiaria := 275
     Senao
          Se (tipoapt = "C") entao
          valordiaria := 200
          Senao
               valordiaria := 150
          fimse
     fimse
fimse

valortotaldiarias := numdiarias * valordiaria
subtotal := valortotaldiarias + valorconsumo
taxaservico := subtotal * 0.10
totalgeral := subtotal + taxaservico

Escreval("Conta Hotel")
Escreval("Nome do hospede: ", nomehospede)
Escreval("Tipo de apartamento: ", tipoapt)
Escreval("Valor total das diárias: R$", valortotaldiarias)
Escreval("Valor do consumo interno: R$", valorconsumo)
Escreval("Subtotal:", subtotal)
Escreval("Taxa de serviço (10%): R$", taxaservico)
Escreval("Total geral: R$", totalgeral)

Fimalgoritmo