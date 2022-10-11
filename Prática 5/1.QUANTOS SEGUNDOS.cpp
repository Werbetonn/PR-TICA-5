#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Potuguese_Brazil");
	
	printf("Programa para converter minutos em segundos\n");
	
	float min, seg;
	
	printf("Informe a quantidade de minutos:");
	scanf("%f", &min);
	
	seg = min * 60;
	
	printf("O número de segundos é: %.2f", seg);
	
	return 0;
	
}
