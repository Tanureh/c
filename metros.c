#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float km, hm, dam, m, dm, cm, mm;
	int unidade;
		printf("Insira um valor em metros: ");
	scanf("%f",&m);
	km=m/1000;
	hm=m/100;
	dam=m/10;
	dm=m*10;
	cm=m*100;
	mm=m*1000;
	printf("Digite o numero referente aa unidade voce quer transformar:\n1 - KM\n2 - HM\n3 - DAM\n4 - DM\n5 - CM\n6 - MM\n");
	scanf("%d",&unidade);
	switch(unidade) {
		case 1: printf("%.2f km\n",km); 
		break; 
		case 2: printf("%.2f hm\n",hm);
		break;
		case 3: printf("%.2f dam\n",dam);
		break;
		case 4: printf("%.2f dm\n",dm);
		break;
		case 5: printf("%.2f cm\n",cm);
		break;
		case 6: printf("%.2f mm\n",mm);
		break;
		default: printf("Selecione 1 ou 6.\n");
		break;
	}
	
	return 0;
}
