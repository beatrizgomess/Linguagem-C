#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float comprimento, altura, largura, volume, total, perda;
	
	printf("\nComprimento: (Em metros)");
	scanf("%f", &comprimento);
	printf("\nAltura: (Em metros)");
	scanf("%f", &altura);
	printf("\nLargura: (Em metros)");
	scanf("%f", &largura);
	
	volume = (largura * comprimento * altura) * 15;
	perda = volume * 0.1;
	total = volume + perda; 
	
	printf("\nO volume: %.2f", volume);
	printf("\n total de perdas: %.2f", perda);
	printf("\nO total: %.2f metros cubicos", total);
	
	
	
	
	return 0;
}
