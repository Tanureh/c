#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que pergunte um número e mostre a multiplicação dele por números de 1 a 10. */

int n, m=1; main(int argc, char *argv[]) {
	printf("Adicione um numero inteiro qualquer: ");
	scanf("%d", &n);
	while (m<=10) {
	 /* O número inicial da variável 'm' é 1, ao longo das repetições, ela será acrescida de uma (1) unidade.
	 A variável m multiplicará a variável 'n' (adicionada pelo usuário). */
		printf("%d*%d=%d\n",n,m,n*m);
		m=m+1;
	}
	return 0;
}
