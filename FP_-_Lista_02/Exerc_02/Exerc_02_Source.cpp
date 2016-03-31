#include <stdio.h>
#include <stdlib.h>

int main() {
	float km, lt;
	printf("Digite a distancia percorrida em km:");
	scanf_s("%f", &km);
	printf("Digite a quantidade de combustivel utilizada em litros:");
	scanf_s("%f", &lt);
	printf("A media de combustivel gasto por km eh %.2fkm/lt\n", km / lt);
	system("pause");
	return 0;
}