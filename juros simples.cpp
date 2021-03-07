#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float emprestimo, taxa, juros, total;
	int periodo;
		
	while (emprestimo != -1){
	printf("\nValor do emprestimo:\n");
	scanf("%f", &emprestimo);
	if (emprestimo == -1){
	break;
}
	printf("\nTaxa aplicada: \n");
	scanf("%f", &taxa);
	printf("\nPeriodo de emprestimo em dias: \n");
	scanf("%d", &periodo);
	
	taxa = taxa/100;
	juros = emprestimo * taxa * periodo;
	total = emprestimo + juros;
	printf("\n Emprestimo: %.2f\n", emprestimo);
	printf("\nTaxa: %.2f%\n", taxa);
	printf("\nPeriodo: %d\n", periodo);
	printf("\n Juros: %.2f\n", juros);
	printf("\nTotal a ser pago: R$%.2f\n", total);
	printf("=======================================");
	}
	return 0;
}
