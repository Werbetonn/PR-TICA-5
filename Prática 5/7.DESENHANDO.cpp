#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	printf("Desenhando um quadrado\n\n");
	
	printf("####################\n");
	printf("#                  #\n");
	printf("#                  #\n");
	printf("#  SEJA BEM-VINDO  #\n");
	printf("#                  #\n");
	printf("#                  #\n");
	printf("####################\n");
	
	return 0;
	
}
