#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int mp; // mp - método de pagamento
	float compra, desconto, total;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &compra);
	printf("\n Metodo de pagamento: \n");
	printf("\n (1) - A prazo\n ");
	printf("\n (2) - A vista\n ");
	scanf("%i", &mp);
	

	switch (mp){
	case 1:
			printf("O valor da compra eh: %.2f", compra);
		break;
		
	
	case 2:
		desconto = compra * 10/100;
		total = compra - desconto;
		printf("O valor da compra eh: %.2f", total);
		break;
		default:
			printf("FIM DO PROGRAMA");
	}
	
	return 0;
}
