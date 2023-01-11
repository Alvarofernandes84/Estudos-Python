/**
 * Algoritmo de leitura de  IMC feito no visualg
 * 
 * /*/


Algoritmo "indicecorporal"
Var
 M, A, IMC : real
Inicio
      escreval("qual seu peso (KG): ")
      leia(M)
      escreval("qual sua altura (M): ")
      leia(A)
      IMC <- M / ( A ^ 2)
      escreval("Seu índice de massa corporal é: ", IMC :5:2)
      se (IMC < 17) entao
         escreval(" E VOCÊ ESTÁ MUITO ABAIXO DO PESO")
      senao
           se (IMC >= 17) e (IMC < 18.5) entao
              escreval(" E VOCÊ ESTÁ 'ABAIXO DO PESO'")
           senao
                se (IMC >= 18.5) e (IMC <= 25) entao
                   escreval(", VOCÊ ESTÁ NO SEU 'PESO IDEAL'")
                senao
                     se (IMC > 25) e (IMC <= 30) entao
                        escreval(", VOCÊ ESTÁ COM 'SOBREPESO'")
                     senao
                          se (IMC > 30) e (IMC <= 35) entao
                             escreval(", VOCÊ ESTÁ COM 'OBESIDADE'")
                          senao
                               se (IMC > 35) e (IMC < 40) entao
                                  escreval(", VOCÊ ESTÁ COM 'OBESIDADE SEVERA'")
                               senao
                                    se (IMC > 40) entao
                                       escreval(", VOCÊ ESTÁ COM 'OBESIDADE MÓBIDA'")
                                    fimse
                               fimse
                          fimse
                     fimse
                fimse
           fimse
      fimse

Fimalgoritmo