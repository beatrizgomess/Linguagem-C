// SEMANA 03 - MAIOR E MENOR NUMERO
#include<stdio.h>
#include<stdlib.h>
main ()
     {
     	
     int n1, n2, n3, n4, n5, maior,menor;
     
     printf("\n MAIOR E MENOR NUMERO\n");
     printf("Digite o primeiro numero: ");
     scanf("%d", & n1);
     printf("Digite o segundo numero: ");
     scanf("%d", & n2);
     printf("Digite o terceiro numero: ");
     scanf("%d", & n3);
     printf("Digite o quarto numero: ");
     scanf("%d", & n4);
     printf("Digite o quinto numero: ");
     scanf("%d", & n5);
     maior = n1;
     menor = n1;
     if (n2 < menor)
        menor = n2;
     if (n2 > maior)
        maior = n2;
     if (n3 < menor)
        menor = n3;
     if (n3 > maior)
        maior = n3;
     if (n4 < menor)
        menor = n4;
     if (n4 > maior)
        maior = n4;
     if (n5 < menor)
        menor = n5;
     if (n5 > maior)
        maior = n5;
	 printf ("\n O maior numero eh : %d", maior);
     printf("\n O menor numero eh: %d", menor);
     
     }
