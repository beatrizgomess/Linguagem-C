#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float metro, metragem, orcamento_total, metragem_total;
	int IT, PCA, TEC, ip, pca, tec, orcamentoip, orcamentopca, orcamentotec;
	
	printf("Valor do metro quadrado (Em reais): R$");
	scanf("%f", &metro);
	printf("Metragem da casa: ");
	scanf("%f", &metragem);
	
	metragem_total = metro * metragem;
	
	printf("Inclinacao Prevista: ");
	printf("\n 1-declive (+30%)");
	printf("\n 2-plano(+0%)");
	printf("\n 3-aclive(+15%)");
	scanf("%i", &IT);
	printf("=========================\n");
	
	if (IT >= 1 || IT <= 3){
	
		switch (IT){
		case 1: 
		orcamentoip = (metragem_total) * 0.30;
		break; 
		case 2: 
		orcamentoip = (metragem_total) * 0.0;
		break;
		case 3:
		ip = (metragem_total) * 0.15;
		break;
}
	printf("\nPadrao de Construcao Adotado: ");
	printf("\n 1-minha casa minha vida (-28%)" );
	printf("\n 2-Padra o professor(-10%)");
	printf("\n 3-Padrao Engenheiro Civil (+25%)");
	scanf("%i", &PCA);
	printf("======================================\n");
	
	if (PCA >= 1 || PCA <= 3){
	
	switch (PCA){
		case 1:
		pca = -(metragem_total * 0.28);
		break;
		case 2: 
		pca = metragem_total * 0.1;
		break;
		case 3: 
		pca = metragem_total * 0.25;
		//orcamentopca = metragem_total + pca;
		break;
}
	printf("\n Tamanho da equipe de construcao: ");
	printf("\n 1- obra normal (+0%)");
	printf("\n 2 - Equipe grande (+40%)");
	printf("\n 3 - Equipe reduzida (-5%)");
	scanf("%i", &TEC);
	printf("========================================\n");
	
	if (TEC >= 1 || TEC <= 3){
	switch (TEC){
		case 1:
			orcamentotec = metragem_total * 0.0;
			break;
		case 2: 
			orcamentotec = metragem_total * 0.4;
			break;
		case 3:
			tec = metragem_total * 0.05;
			break;
	}
			}
		orcamento_total = metragem_total + orcamentoip + pca + orcamentotec;
		printf("Orcamento total: %.2f", orcamento_total);
	

}


	
}
	
	
	
	return 0;
}
