#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main(){
	
	float compra, desconto, total;
	int id;
	compra = desconto = total = 0;
	
	printf("\n(1) - CLIENTE COMUM \n");
	printf("\n(2) - FUNCIONARIO\n");
	printf("\n(3) - CLIENTE VIP\n");
	printf("Digite o valor da Compra: ");
	scanf(" %f" , &compra);
	printf("\n Qual o tipo de cliente? \n");
	scanf("%d" , &id);
		
	
	switch (id){
	
	case 1: (id = 1);
			printf("\nValor total da sua compra: R$%.1f\n", compra);
			break;
					
  	 case 2: 
		(id = 2);
		    desconto = compra * 10/100;
			total = compra - desconto;
			printf("\nO Valor do seu desconto = R$%.1f\n", desconto);
			printf("\nO total da sua compra = R$%.1f\n", total);
			break;
				
	 case 3: 
		(id = 3);
			desconto = compra* 5/100;
		    total = compra - desconto;
			printf("\nO Valor do seu desconto = R$%.1f\n", desconto);
			printf("\nO total da sua compra = R$%.1f\n", total);
			break;
			
			default:
	printf("opcao invalida");	
		}

	return 0;
}

