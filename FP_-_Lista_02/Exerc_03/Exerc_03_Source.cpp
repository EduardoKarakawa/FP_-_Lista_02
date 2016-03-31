#include <stdio.h>
#include <stdlib.h>

int main() {
	float r, pi = 3.14f;
	printf("Digite o raio da esfera:");
	scanf_s("%f", &r);
	printf("O volume da esfera %.2f\n", (4 / 3)*pi*(r*r*r));
	system("pause");
	return 0;
}