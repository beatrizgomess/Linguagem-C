#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int lado, x, y;
	
	
	printf("Digite um numero: 1 a 20");
	scanf("%d", &lado);
	if (lado >= 1 && lado <= 20){
		for (x=0; x < lado; x++){
			for (y = 0; y < lado; y++){
	 		printf("*");
	 	}
			printf("\n");
	
}
}else{
	printf("Valor invalido");
}
	return 0;
}
