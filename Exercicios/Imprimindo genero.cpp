#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char genero;
	
	printf("\nDigite uma das letras: M ou F \n");
	scanf("%c", &genero);
	
	switch (genero){
		case 'F':
			printf("\nGenero Feminino\n");
			break;
		case 'M':
			printf("\n Genero Masculino\n");
			break;
			default:
				printf("Genero nao encontrado");
	}
	
	
	
	return 0;
}
