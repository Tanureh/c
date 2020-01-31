#include <stdio.h>
#include <stdlib.h>

/* Adicione as notas 1, 2, 3 e 4 e seus respectivos pesos. O programa calculará a média
aritmética ponderada do que fora adicionado pelo usuário. */

int contador=1;
float nota, peso, n1, nt=0, pt=0, nf=0; main(int argc, char *argv[]) {
	while (contador<=4) {
		printf("Adicione a nota e o peso: ");
	    // O programa fará a leitura do que for inserido nas variáveis 'nota' e 'peso' pelo usuário. 
		scanf("%f %f", &nota, &peso);
		// n1 refere-se à multiplicação da nota com o peso relativo a ela
		n1=nota*peso;
		// nt refere-se às somas sucessivas de n1
		nt=nt+n1;
		// pt refere-se às somas sucessivas dos pesos, a serem usadas no denominador
		pt=pt+peso;
	
		contador=contador+1;
	}
	// nf é a nota final, a soma das multiplicações nota*peso dividas pela soma dos pesos. 
	nf=nf+(nt/pt);
	// A média final é mostrada com duas casas à direita.
	printf("Media final: %.2f",nf);

	return 0;
}
