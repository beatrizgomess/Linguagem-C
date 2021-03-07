#include <stdio.h>
#include <stdlib.h>
int main (){
	
	float km, Km_rodados, x, abastecimentos, litros, Litros_Acumulados, Km_Abastecimento, Km_Acumulados, consumo;

	for (x-0; x < km; x++){
	printf("\n Km rodados: *Digite -1 para sair do programa* \n");
	scanf("%f", &km);
	
	if (km == -1){
		break;
	}
	
	Km_Acumulados += km;
	
	
	printf("\n Abastecimentos feitos: \n");
	scanf("%f", &abastecimentos);
		for (x=0; x < abastecimentos; x++){
		printf("\nLitros obtidos: \n");
		scanf("%f", &litros);
		
		Litros_Acumulados += litros;
		
		Km_Abastecimento = km / litros;	
		printf("\nConsumo por trajeto %.2f Km/L\n", Km_Abastecimento);
	}printf("\n===========================================================\n");

	consumo += Km_Acumulados/ Litros_Acumulados ;
	printf("\nO Consumo de todo o trajeto: %.2f Km/L\n", consumo);	
	printf("\nTotal de Litros: %.2fL\n", Litros_Acumulados);
	printf("\nTotal de Abastecimentos %.2f\n", abastecimentos);
	printf("\nTotal de Km: %.2f Km\n", Km_Acumulados);
}

	return 0;
}

