#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float a, b, c, form1, form2, form3, form4;
	
	printf("Programa para receber 3 variáveis e exibir a resolução de 4 fórmulas\n");
	
	printf("Insira o valor de a:");
	scanf("%f", &a);
	
	printf("Insira o valor de b:");
	scanf("%f", &b);
	
	printf("Insira o valor de c:");
	scanf("%f", &c);
	
	form1 = (a * b) / c;
	form2 = (a * a) + b + (5 * c);
	form3 = (a * b * c) + b + (5*c);
	form4 = (( a * b * c) * (a * b * c) * (a * b *c)) / 2;
	
	printf("\nO valor da primeira fórmula é: %.2f\n", form1);
	printf("O valor da segunda fórmula é: %.2f\n", form2);
	printf("O valor da terceira fórmula é: %.2f\n", form3);
	printf("O valor da quarta é: %.2f\n", form4);
	
	return 0;
}
