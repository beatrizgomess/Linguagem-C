
#include <iostream>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {
	
	float r , d;
	
	printf("Digite o valor em reais: ");
	scanf("%f", &r);
	
	d = (r/5.37);
	
	printf("\n O valor em dolar eh: %.2f \n", d);
	
	return 0;
}
