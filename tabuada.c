#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inte, x, mult; main(int argc, char *argv[]) {
	printf("Insira um numero inteiro qualquer para ver seus multiplos: ");
	scanf("%d",&inte);

	for (x=1;x<11;x++) {
		mult=inte*x;
		printf("\n%d * %d = %d\n", inte, x, mult);
	}
	return 0;
}
