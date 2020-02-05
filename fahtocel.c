#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double f, c; main(int argc, char *argv[]) {
	printf("Insira um valor em Graus Fahrenheit a serem convertidos em Graus Celsius: ");
	scanf("%lf", &f);
	c=(f-32.0)*(5.0/9.0);
	printf("\n<%.2lf> Graus Celsius", c);
	return 0;
}
