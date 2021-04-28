	

{

  inclua biblioteca Matematica --> mat

  funcao inicio()

  {

      real qtdeDin, valComb, qtdeLitros

      escreva("Quanto custa o litro do combustível? R$ ")

      leia(valComb)

      escreva("Quantos reais você tem? R$ ")

     leia(qtdeDin)

     qtdeLitros=qtdeDin/valComb

     escreva("Com R$ ", qtdeDin, " você consegue abastecer ", mat.arredondar(qtdeLitros,2)," litros de combustível.")

     }

}
