numero calibracao = 20
numero sensorDireita = 0
numero sensorEsquerda = 0
booleano flag = verdadeiro

inicio
limparconsole()
zerartemporizador()
  enquanto (flag) farei {
    sensorDireita = luz(1)
    sensorEsquerda = luz(2)
	
	escrevernumero(1,sensorDireita)
	escrevernumero(2,sensorEsquerda)

	se(ultra(1) <40) entao{
		se(ultra(2)<250) entao{
			esquerda(1000)
			esperar(2000)
		}
		senao {
			direita(1000)
			esperar(2000)
			se(ultra(1) < 40) entao{
			direita(1000)
			esperar(5300)
			}
		}
	}
    se(sensorDireita < calibracao) entao {
        direita(200)
    }
	senao se(sensorEsquerda < calibracao) entao {
		esquerda(200)
	}
	senao se(cor(1) == "VERMELHO" e cor(2) == "VERMELHO") entao {
		flag = falso
	}
 	senao {
      frente(60)
    }
  }
limparconsole()
escrever(1,"Parabéns, você finalizou o percurso")
esperar(2000)
parar()
fim