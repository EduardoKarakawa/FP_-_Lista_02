#include <stdio.h>
#include <stdlib.h>

int main() {
	int saque, c;
	printf("Digite o valor do saque:");
	scanf_s("%d", &saque);
	c = 0;
	while (saque >= 50) {
		saque = saque - 50;
		c++;
	}
	if (c > 0) {
		printf("%d notas de R$50,00\n", c);
		c = 0;
	}
	while (saque >= 20) {
		saque = saque - 20;
		c++;
	}
	if (c > 0) {
		printf("%d notas de R$20,00\n", c);
		c = 0;
	}
	while (saque >= 10) {
		saque = saque - 10;
		c++;
	}
	if (c > 0) {
		printf("%d notas de R$10,00\n", c);
		c = 0;
	}
	while (saque >= 5) {
		saque = saque - 5;
		c++;
	}
	if (c > 0) {
		printf("%d notas de R$5,00\n", c);
		c = 0;
	}
	while (saque >= 2) {
		saque = saque - 2;
		c++;
	}
	if (c > 0) {
		printf("%d notas de R$2,00\n", c);
		c = 0;
	}
	if (saque>0) {
		printf("%d notas de R$1,00\n", saque);
	}
	system("pause");
	return 0;
}