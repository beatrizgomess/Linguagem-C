#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, x, y, z, w, u;
	
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	x = num / 10000;
	y = (num / 1000) % 10;
	z = (num / 100) % 10;
	w = (num / 10) % 10;
	u = num % 10;
	
	if (x == u && y == w){
		printf("E um palindromo");
	}else {
		printf("Nao e um palindromo");
	}	

	return 0;
}
