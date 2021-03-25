#include <stdio.h>

int numero_maior(int){
	int numero, resultado, x, maior;
	for(x=1; x<=50; x++){
	printf("%d - Digite um numero: ", x);
	scanf("%d", &numero);
	if (numero > maior){	
		maior = numero;
}
}
	resultado = maior;
	/* chama a função e recebe retorno */
		printf("Resultado: %d", resultado);
		return 0;
}

int main(){
	int resultado, maior, numero;
	resultado = numero_maior(maior);
	return resultado;
}
