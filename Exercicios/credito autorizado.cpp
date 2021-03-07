#include <stdio.h>
#include <stdlib.h>

int main()

{

	float saldo_incial , encargos , creditos , credito_permitido, novo_saldo;
	int conta;
	
	while (conta != -1){
	printf("\n Digite -1 se deseja encerrar\n");
	printf("\nInforme o numero da conta: ");
	scanf("%i", &conta);
		if (conta == -1){
		break;
	}

	printf("\n Informe o Saldo do inicio do mes: \n");
	scanf("%f", &saldo_incial);
	printf("Informe o total de todos os encargos: ");
	scanf("%f", &encargos);
	printf("Informe o total de credito aplicados a conta: ");
	scanf("%f", &creditos);
	printf("Informe o limite de credito permitido: ");
	scanf("%f", &credito_permitido);
	 
	 novo_saldo = (saldo_incial + encargos) - creditos;
	 if (novo_saldo < creditos){
	 		printf("\nConta: %i\n", conta);
  		 	printf("\nTotal de creditos do mes: %.2f\n", creditos);
   			printf("\nLimite de credito %.2f\n", novo_saldo);
   			printf("\nLimite de credito ultrapassado\n");
   		} else {
   			printf("Limite Autorizado");
   		}
   		 	printf("\n ========================================================== \n");
}
	return 0;
}
