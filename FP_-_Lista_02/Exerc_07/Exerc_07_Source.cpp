#include <stdio.h>
#include <stdlib.h>

int main() {
	float ant, atu, tx = 0.38f;
	printf("Digite o consumo de energia do mes anterior em kWh:");
	scanf_s("%f", &ant);
	printf("Digite o consumo de energia do nes atual em kWh:");
	scanf_s("%f", &atu);
	printf("Total a pagar do mes:\nAnterior: R$%.2f\nAtual: R$%.2f\n", ant*tx + ((ant*tx)*0.27f), atu*tx + ((atu*tx)*0.27f));
	system("pause");
	return 0;
}