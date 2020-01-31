#include <stdio.h>
#include <stdlib.h>

/* Adicione as notas 1, 2, 3 e 4 e seus respectivos pesos. O programa calculará a média
aritmética ponderada do que fora adicionado pelo usuário. */

int contador=1;
float nota, peso, n1, nt=0, pt=0, nf=0; main(int argc, char *argv[]) {
	while (contador<=4) {
		printf("Adicione a nota e o peso: ");
		scanf("%f %f", &nota, &peso);
		
		n1=nota*peso;
		nt=nt+n1;
		pt=pt+peso;
	
		contador=contador+1;
	}
	nf=nf+(nt/pt);
	printf("Media final: %.2f",nf);

	return 0;
}
