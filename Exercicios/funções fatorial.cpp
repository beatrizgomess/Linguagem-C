#include <stdio.h>
#include <stdlib.h>

int fatorial(int n, int x){
	int resultado;
	resultado = 1;
	for (; x >=1 ; --x){
	resultado *= x;	
}
}

int main (void){
	int resultado, n, x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	resultado = fatorial(n, x);
	printf("Resultado: %d\n", resultado);
	
}
