#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	float tc , tk;
	
	printf("Digite a temperatura em Celsius. C: ");
	scanf("%f", &tc);
	
	tk = (tc + 273.15);
	printf("A temperatura em Kelvin eh: %.2.f ", tk);
	
	return 0;
}
