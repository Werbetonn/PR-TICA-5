#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, soma, sub, mult, div;
	
	printf("Programa para calcular as quatro opera��es b�sicas matem�ticas entre dois n�umeros\n");
	
	printf("Insira o primeiro n�mero:");
	scanf("%f", &n1);
	
	printf("Insira o sergundo m�mero:");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("\nO valor da soma �: %.2f\n", soma);
	printf("O valor da subtra��o �: %.2f\n", sub);
	printf("O valor da multiplica��o �: %.2f\n", mult);
	printf("O valor da divis�o �: %.2f\n", div);
	
	return 0;
	
}
