#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	float juros (float);
	float M, C, taxa, tempo_meses, Total;
	int idade;

int main(){
	
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Digite o valor inicial: ");
	scanf("%f", &C);
	printf("Digite a taxa: ");
	scanf("%f", &taxa);
	idade = 65 - idade;
	printf("Tempo de aplicacao (EM MESES): %d\n", idade);
	printf("Montante: %.3f\n",Total, juros(Total));
	
}

float juros (float){
	tempo_meses = 12*idade;
	M = pow((1+taxa/100), tempo_meses);
	Total = (M * C);	

	return Total ;
}


