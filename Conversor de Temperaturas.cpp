#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	 float cel, kel;
	
	float tc, tk;
  printf("Conversor de Temperatura - Celsius/Kelvin\n");
  printf("\nInsira uma temperatura em graus Celsius: ");
  scanf("%f", &tc);
  tk = tc + 273; //f�rmula de convers�o �C para �K
  printf ("\nEsta temperatura corresponde em graus Kelvin �: %.2f", tk);
  return 0;
}
