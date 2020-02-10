#include <stdio.h>
#include <stdlib.h>

float a, b, x, y=0; main() {
printf("Insira o valor de a e b da equação de segundo grau:\n");
scanf("%f %f", &a, &b);
x=-b/a;
printf("A raiz da equação eh: %f", x);

}