#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int valor, cafe, troco;
	
	printf("Insira o valor:");
	scanf("%d", &valor);
	
	cafe = valor / 7;
	troco = valor % 7;
	
	printf("O total de caf� ser� %d e o troco ser� %d", cafe, troco);
	
	return 0;
	
}
