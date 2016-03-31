#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, c=0, d=0;
	printf("Digite um numero inteiro:");
	scanf_s("%d", &n);
	if (abs(n) < 100 || abs(n) > 999) {
		printf("Digite um numero de tres casas decimais:");
		scanf_s("%d", &n);
	}
	n = abs(n);
	while (n > 99) {
		n = n - 100;
		c++;
	}
	while (n > 9) {
		n = n - 10;
		d++;
	}
	printf("%d + %d + %d\n", c*100, d*10, n);
	system("pause");
	return 0;
}