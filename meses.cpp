#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int m;
	printf("Digite um número de 1 a 12: ");
	scanf("%i", &m);
	
	switch (m){
		case 1:
			(m == 1);
				printf("Janeiro");
				break;
		case 2:
			(m == 2);
				printf("Fevereiro");
				break;
		case 3: 
			(m == 3);
				printf("Marco");
				break;
		case 4: 
			(m == 4);
				printf("Abril");
				break;
		case 5: 
			(m == 5);
				printf("Maio");
				break;
		case 6: 
			(m == 6);
				printf("Junho");
				break;
		case 7: 
			(m == 7);
				printf("Julho");
				break;
		case 8: 
			(m == 8);
				printf("Agosto");
				break;
		case 9: 
			(m == 9);
				printf("Setembro");
				break;
		case 10:
			(m == 10);
				printf("Outubro");
				break;
		case 11: 
			(m == 11);
				printf("Novembro");
				break;
		case 12: 
			(m == 12);
				printf("Dezembro");
				break;
	default: 
		printf("FIM DO PROGRAMA");
		
	}
	
}
