#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, maior;
	printf("Digite tres numeros inteiros separados por espaco:");
	scanf_s("%d %d %d", &a, &b, &c);
	maior = (a + b + abs(a - b)) / 2;
	maior = (maior + c + abs(maior - c)) / 2;
	printf("O maior numero eh %d.\n", maior);
	system("pause");
	return 0;
}