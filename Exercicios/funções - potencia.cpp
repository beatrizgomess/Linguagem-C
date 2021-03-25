#include <stdio.h>
#include <stdlib.h>



int potencia(int x, int z, int i)
{

int resultado;
	resultado = 1;
	for(int i=0; i<z; i++){
	resultado *= x;
}	if  (z == 0){
	resultado = 1;
}else if (z == 1){
	resultado = x;
}

	return resultado; // retorno da função
}

int main (void){
	int x, z, resultado, i;
	printf("Digite a base: ");
	scanf("%d", &x);
	printf("Digite a potencia: ");
	scanf("%d", &z);
	resultado = potencia(x, z, i);
	printf("Resultado: %d\n", resultado);
	
	return 0;
	
}
