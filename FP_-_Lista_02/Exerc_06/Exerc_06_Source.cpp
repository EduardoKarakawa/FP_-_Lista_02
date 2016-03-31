#include <stdio.h>
#include <stdlib.h>

int main() {
	float pes, pol, jar, p = 2.54f, m, cm;
	printf("Digite o comprimento em metros:");
	scanf_s("%f", &m);
	cm = m * 100;
	pol = cm / p;
	pes = pol / 12;
	jar = pes / 3;
	printf("O comprimento digitado corresponde a:\nJardas: %.2f\nPes:%.2f\nPolegadas:%.2f\n", jar, pes, pol);
	system("pause");
	return 0;
}
