#include <stdio.h>
#include <stdlib.h>

int main() {
	int c;
	printf("Digite a temperatura em Celcius:");
	scanf_s("%d", &c);
	printf("A temperatura em Farenheit eh %d oF\n", (9 / 5)*c + 32);
	system("pause");
	return 0;
}