#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que pergunte um n�mero e mostre a multiplica��o dele por n�meros de 1 a 10. */

int n, m=1; main(int argc, char *argv[]) {
	printf("Adicione um numero inteiro qualquer: ");
	scanf("%d", &n);
	while (m<=10) {
	 /* O n�mero inicial da vari�vel 'm' � 1, ao longo das repeti��es, ela ser� acrescida de uma (1) unidade.
	 A vari�vel m multiplicar� a vari�vel 'n' (adicionada pelo usu�rio). */
		printf("%d*%d=%d\n",n,m,n*m);
		m=m+1;
	}
	return 0;
}
