#include <stdio.h>
#include <stdlib.h>

/* Adicione as notas 1, 2, 3 e 4 e seus respectivos pesos. O programa calcular� a m�dia
aritm�tica ponderada do que fora adicionado pelo usu�rio. */

int contador=1;
float nota, peso, n1, nt=0, pt=0, nf=0; main(int argc, char *argv[]) {
	while (contador<=4) {
		printf("Adicione a nota e o peso: ");
	    // O programa far� a leitura do que for inserido nas vari�veis 'nota' e 'peso' pelo usu�rio. 
		scanf("%f %f", &nota, &peso);
		// n1 refere-se � multiplica��o da nota com o peso relativo a ela
		n1=nota*peso;
		// nt refere-se �s somas sucessivas de n1
		nt=nt+n1;
		// pt refere-se �s somas sucessivas dos pesos, a serem usadas no denominador
		pt=pt+peso;
	
		contador=contador+1;
	}
	// nf � a nota final, a soma das multiplica��es nota*peso dividas pela soma dos pesos. 
	nf=nf+(nt/pt);
	// A m�dia final � mostrada com duas casas � direita.
	printf("Media final: %.2f",nf);

	return 0;
}
