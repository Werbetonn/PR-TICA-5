#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, soma, sub, mult, div;
	
	printf("Programa para calcular as quatro operações básicas matemáticas entre dois núumeros\n");
	
	printf("Insira o primeiro número:");
	scanf("%f", &n1);
	
	printf("Insira o sergundo múmero:");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("\nO valor da soma é: %.2f\n", soma);
	printf("O valor da subtração é: %.2f\n", sub);
	printf("O valor da multiplicação é: %.2f\n", mult);
	printf("O valor da divisão é: %.2f\n", div);
	
	return 0;
	
}
