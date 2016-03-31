#include <stdio.h>
#include <stdlib.h>

int main() {
	float gb;
	printf("Digite a capacidade do Hd em Gb:");
	scanf_s("%f", &gb);
	printf("A capacidade real do Hd eh %.2fGb.\n", gb * (74.5f / 80));
	system("pause");
	return 0;
}