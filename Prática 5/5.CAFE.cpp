#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int valor, cafe, troco;
	
	printf("Insira o valor:");
	scanf("%d", &valor);
	
	cafe = valor / 7;
	troco = valor % 7;
	
	printf("O total de café será %d e o troco será %d", cafe, troco);
	
	return 0;
	
}
