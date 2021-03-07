#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int n1, n2, k, m;
	
	printf("Digite um numero: ");
	scanf("%i", &n1);
	printf("Digite outro numero: ");
	scanf("%i", &n2);
	
	
	
	k = n1 % n2;
	m =  k * n2;
	if (m == n1 || m == 0){
		printf("sao multiplos");
	} else {
		printf("nao sao multiplos");
	}
	
	
	
	return 0;
}
