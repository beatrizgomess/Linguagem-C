#include <stdio.h>
#include <stdlib.h>

float raiz_quadrada (float numero);

float raiz_quadrada (float numero)
{
	int i;
	float raiz = numero;
	for(i=0; i < 10; ++i)
	raiz = raiz/2 + numero/(2*raiz);
	
	return raiz; // retorno da funcao.	
}


int main (void){
	float numero, raiz;
	printf("Digite um numero: ");
	scanf("%f", &numero);
	printf("A raiz quadrada de %.2f eh %.2f", numero, raiz_quadrada(numero));
	
	return 0;
}



