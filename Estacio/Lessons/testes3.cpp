	

{

  inclua biblioteca Matematica --> mat

  funcao inicio()

  {

      real qtdeDin, valComb, qtdeLitros

      escreva("Quanto custa o litro do combust�vel? R$ ")

      leia(valComb)

      escreva("Quantos reais voc� tem? R$ ")

     leia(qtdeDin)

     qtdeLitros=qtdeDin/valComb

     escreva("Com R$ ", qtdeDin, " voc� consegue abastecer ", mat.arredondar(qtdeLitros,2)," litros de combust�vel.")

     }

}
