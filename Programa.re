numero calibracao = 20
numero sensorDireita = 0
numero sensorEsquerda = 0
booleano flag = verdadeiro
numero cont = 0

inicio
limparconsole()
  enquanto (flag) farei {
    sensorDireita = luz(1)
    sensorEsquerda = luz(2)
	
	escrevernumero(1,sensorDireita)
	escrevernumero(2,sensorEsquerda)

	se(ultra(1) <40) entao{
		se(ultra(2)<250) entao{
			limparconsole()
			escrever(1,"Objeto detectado, virando para a esquerda...")
			esquerda(900)
			esperar(2700)
		}
		senao {
			limparconsole()
			escrever(1,"Objeto detectado, virando para a direita...")
			direita(1000)
			esperar(2000)
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
	senao se(cor(3) == "CIANO" e cont==0) entao {
		escrever(1,"Preparando para pegar o kit de resgate")
		tras(100)
		esperar(1000)
		rotacionar(300,180)
		baixar(2000)
		abrir(1000)
		girarbaixo(500)
		tras(50)
		esperar(3000)
		parar()
		fechar(1000)
		girarcima(2000)
		levantar(2000)
		rotacionar(300,180)
		escrever(2,"Kit de resgate conquistado com sucesso")
		cont=1
	}
 	senao {
      	frente(60)
	}
  }
limparconsole()
escrever(1,"Parabéns, você finalizou o percurso proposto para o PP3 de robótica!")
esperar(1000)
parar()
fim