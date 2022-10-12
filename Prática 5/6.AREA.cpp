#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float base, altura, area;
	
	printf("\nQual a base:");
	scanf("%f", &base);
	
	printf("Qual a altura:");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("A área é da figura é: %.2f", area);
	
	return 0;
	
}
