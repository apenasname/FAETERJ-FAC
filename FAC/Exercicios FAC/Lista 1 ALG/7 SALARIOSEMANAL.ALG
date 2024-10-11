Algoritmo "salariosemanal"

Var
   horastrab, valporhora, salariosemanal: real

Inicio
Escreva("Número de horas trabalhadas na semana: ")
Leia(horastrab)
Escreva("Digite o valor recebido por hora trabalhada: R$ ")
Leia(valporhora)

Se (horastrab <= 40) entao
   salariosemanal := horastrab * valporhora
Senao
     salariosemanal := (horastrab * valporhora) *  1.5
fimse

Escreva("O salário semanal é: R$", salariosemanal)

Fimalgoritmo