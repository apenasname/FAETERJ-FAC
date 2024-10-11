Algoritmo "carro"

Var
   C, CF, PD, I, Total: Real


Inicio
// C = Custo das porcentagens de distribuidor e impostos
// CF = Custo de fábrica do carro
// PD = Porcentagem do distribuidor
// I = Porcentagem de impostos
// Total = Custo total do carro com

Escreva("Digite o valor de fábrica de um carro: ")
Leia(CF)
Escreva("Qual o valor da porcentagem do distribuidor?")
Leia(PD)
Escreva("Qual a porcentagem de impostos?")
Leia(I)
C <- (PD*CF)/100 + (I*CF)/100
Total <- CF + C
Escreva("O custo total do carro é de: ", Total)
Fimalgoritmo