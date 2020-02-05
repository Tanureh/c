#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int d, c; main(int argc, char *argv[]) {
	printf("Insira um numero inteiro qualquer a ser convertido: ");
	scanf("%d",&d);
	printf("Converter para:\n1 - Octal\n2 - Hexadecimal\n");
	scanf("%d",&c);
	
	switch(c) {
		case 1: {
			printf("%d em octal eh %o", d, d);
			break;
		}
		case 2: {
			printf("%d em hexadecimal eh %X", d, d);
			break;
		}
		default:{
			printf("Deves selecionar entre 1 e 2.");
			break;
		}
	}
	return 0;
}
