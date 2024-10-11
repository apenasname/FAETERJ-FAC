Algoritmo "nadadoridade"

Var
   idade: inteiro

Inicio
escreva("Fale uma  idade: ")
leia(idade)

   se (idade >= 0) e (idade <= 4) então
      escreva("O nadador é da categoria Infantil A")
   senao
        se (idade >= 5) e (idade <= 7) então
           escreva("O nadador é da categoria Infantil B")
        senao
                se (idade >= 8) e (idade <= 10) então
                   escreva("O nadador é da categoria Infantil C")
                senao
                     se (idade >= 11) e (idade <= 13) então
                        escreva("O nadador é da categoria Juvenil A")
                     senão
                          se (idade >= 14) e (idade <= 17) então
                             escreva("O nadador é da categoria Juvenil B")
                          senao
                               escreva("O nadador é da categoria Adulto")
                          fimse
                     fimse
                fimse
           fimse
      fimse
Fimalgoritmo