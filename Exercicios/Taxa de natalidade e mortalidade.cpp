#include<stdio.h>


int main ( ) 
{ 
    char operacao;
    float natalidade, mortalidade, nascimentos, obitos, habitantes;
    
    
    printf("\n Calculo de taxas: \n");
	printf("Escolha uma opcao abaixo: \n\n");
    printf("(N) A taxa de natalidade \n");
    printf("(M) A taxa de mortalidade \n");

    scanf("%c",&operacao);

    switch(operacao) 
       { 
        case 'N':
            printf ( "\n Digite o numero de nascimentos : \n" ); 
            scanf ( "%f",&nascimentos);
            printf ( "\n Digite o numero de habitantes : \n" ); 
            scanf ( "%f",&habitantes);
            natalidade=(nascimentos*1000)/habitantes;
            printf ( "\n Taxa de Natalidade = %.2f \n", natalidade );
        break; 
        
        case 'M':
            printf ("\n Digite o numero de obitos: \n" ); 
            scanf ("%f",&obitos);
            printf ("\n Digite o numero de habitantes : \n " ); 
            scanf ( "%f",&habitantes);
            mortalidade=(obitos*1000)/habitantes;
            printf ( "\n Taxa de Mortalidade = %.2f \n",mortalidade );
        break;   
   
        default : 
              printf ("\n FIM DO PROGRAMA ") ; 
     } 
 return 0;  
}
