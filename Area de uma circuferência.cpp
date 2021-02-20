#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {
	
	float r, a;
	printf("Area de uma circuferencia\n");
	printf("Qual o valor do raio?  ");
	scanf("%f", &r);
	
	a = 3.14*(r*r);
	
	printf("A area eh: %.2.f", a);
	
	
	return
