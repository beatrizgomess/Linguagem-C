#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	float juros (float);
	float M, C, taxa, Total, contribuicao, contribuicao_total, Capital;
	int idade, x, tempo_meses;

int main(){
	
	printf("Idade: ");
	scanf("%d", &idade);
	idade = 65 - idade;
	tempo_meses = 12*idade;
	printf("Tempo de aplicacao (EM MESES): %d\n", tempo_meses);
	for (x=1; x<=tempo_meses; x++){
	printf("%d - Contribuicao: ", x);
	scanf("%f", &contribuicao);
	contribuicao_total += contribuicao;
}
	printf("Total Contribuicao: %.2f", contribuicao_total);
	printf("\nDigite o valor inicial: ");
	scanf("%f", &C);
	Capital = contribuicao_total + C;
	printf("Capital Investido: %.2f", Capital);
//	printf("Tempo de Contribuicao Anual (EM MESES): %d\n", idade);
	printf("\nDigite a taxa: ");
	scanf("%f", &taxa);
	printf("Montante: %.2f\n",Total, juros(Total));

	return 0;	
}


float juros (float){
	tempo_meses = 12*idade;

	M = pow((1+taxa/100), tempo_meses);
	Total = M * Capital;	

	return Total;
}


