#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float peso, altura, imc;
	
	printf("Programa para calcular IMC");
	
	printf("\nQual o seu peso");
	scanf("%f", &peso);
	
	printf("Qual a sua altura");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("O IMC é: %.2f\n", imc);
	
	return 0;
	
}
