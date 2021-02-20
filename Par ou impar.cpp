#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main() {
	int x, result;
	
	printf("\nPAR OU IMPAR\n");
	printf("Digite um numero: ");
	scanf("%i", &x);
	
	result = x % 2;
	if (result == 0){
		printf("Eh PAR");
	}else
		printf("Eh Impar");
		
	
	
	
	
	return 0;
}
