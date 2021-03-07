#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int opcao;
	float compra, desconto, total;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &compra);
	printf("\n Metodo de pagamento: \n");
	printf("\n (1) - A vista\n ");
	printf("\n (2) - A prazo\n ");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1:
		desconto = compra*0.1;
		total = compra - desconto;
	 	printf("O valor da compra eh: R$ %.2f", total);
		break;
		case 2:
		printf("O valor da compra eh: R$ %.2f", compra);
		break;
		default:
			printf("Opcao inválida");
		}
	
	return 0;
}
