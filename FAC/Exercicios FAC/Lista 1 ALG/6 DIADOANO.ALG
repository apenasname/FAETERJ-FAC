Algoritmo "diadoano"

Var
   dia, mes, diaDoAno: inteiro

Inicio
   Escreva("Informe o dia: ")
   Leia(dia)
   Escreva("Informe o mês: ")
   Leia(mes)

   diaDoAno := dia

   Se (mes > 1) entao
      diaDoAno := diaDoAno + 31 // Janeiro
   fimse

   Se (mes > 2) entao
      diaDoAno := diaDoAno + 28 // Fevereiro
   fimse

   Se (mes > 3) entao
      diaDoAno := diaDoAno + 31 // Março
   fimse

   Se (mes > 4) entao
      diaDoAno := diaDoAno + 30 // Abril
   fimse

   Se (mes > 5) entao
      diaDoAno := diaDoAno + 31 // Maio
   fimse

   Se (mes > 6) entao
      diaDoAno := diaDoAno + 30 // Junho
   fimse

   Se (mes > 7) entao
      diaDoAno := diaDoAno + 31 // Julho
   fimse

   Se (mes > 8) entao
      diaDoAno := diaDoAno + 31 // Agosto
   fimse

   Se (mes > 9) entao
      diaDoAno := diaDoAno + 30 // Setembro
   fimse

   Se (mes > 10) entao
      diaDoAno := diaDoAno + 31 // Outubro
   fimse

   Se (mes > 11) entao
      diaDoAno := diaDoAno + 30 // Novembro
   fimse

   Escreva("A data ", dia, "/", mes, " é o", diaDoAno, "° dia do ano")

Fimalgoritmo