#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float peso, altura, imc;
	printf("CALCULO DO IMC: \n\n");
	printf("\nA formula eh: peso(KG) / altura(M)\n");
	printf("\nDigite o peso em KG: ");
	scanf("%f", &peso);
	printf("Digite a altura em m: ");
	scanf("%f", &altura);
	
	imc = ((peso*1000) / (altura*altura))/1000;
	
	printf("O Imc eh: %.2.f", imc);
	
	
	
	return 0;
}
