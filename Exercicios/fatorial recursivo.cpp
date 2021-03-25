#include <stdio.h>


int main(void){
	
	int fatorial(int x);
	
	int numero, resultado;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	resultado = fatorial(numero);
	
	printf("Resultado:  %i", resultado);
	return 0;
}
int fatorial (int x){

	int resultado; 
	
	if (x == 0){
		return 1;
	}else {
		 resultado = x * fatorial(x-1);
	}
	return resultado;
}


