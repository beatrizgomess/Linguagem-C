#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float t, s, nv;
	
	printf("Digite a taxa de correcao: "); 
	scanf("%f", &t);
	
	s = (t/100)*1100;
	nv = 1100 + s;
	
	printf("Novo salario: %.2.f", nv);
	
	
	
	return 0;
}
