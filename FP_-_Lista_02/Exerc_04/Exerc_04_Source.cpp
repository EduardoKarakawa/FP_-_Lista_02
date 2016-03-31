#include <stdio.h>
#include <stdlib.h>

int main() {
	float m, h;
	printf("Digite sua altura em metros:");
	scanf_s("%f", &h);
	printf("Digite seu pesso em quilograma:");
	scanf_s("%f", &m);
	printf("O seu IMC eh %.2f\n", m / (h*h));
	system("pause");
	return 0;
}