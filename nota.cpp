#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float nota;
	
	printf("\nVerificar nota do aluno\n");
	printf("Digite a nota: ");
	scanf("%f", &nota);
	
	if (nota >= 7.0){
		printf("\nAluno Aprovado\n");
	} 
	else {
		printf("\nAluno Reprovado\n");
	}
	
	
	
	
	return 0;
}
