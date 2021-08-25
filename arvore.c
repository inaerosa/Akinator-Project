
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Arvore.h"


int main(){

    char p[50];
    char r[3];
 	int cont=0;
 	char resposta[3];
 	int opc;
	
	do{
		printf("------------AKINATOR-------------\n");
		printf ("          [0] - Sair            |\n");
		printf ("          [1] - Jogar           |\n");
		printf ("         [2] - Ensinar          |\n");
		scanf ("%d", &opc);
		printf ("--------------------------------\n");
		switch (opc){
			case 1:
				printf("Jogo em construcao");
			break;
			case 2:
    				printf("Informe uma pergunta: ");//sabe voar?
        			scanf ("%s", p); 
        			Arvore * pergunta = arvore_cria(p);
        			
        			printf ("Informe a resposta certa: "); 
        			scanf ("%s", certa); 
        			Arvore * certa = arvore_cria(r);
        			printf ("Informe a resposta errada: ");
        			scanf("%s", errada); 
        			Arvore * errada = arvore_cria(r);
			break;
		}
	} while (opc != 0);
	 
        
    
//     printf("\n Altura: %d", arvore_altura(pergunta));
////     
//     printf("\n Localizado valor %d", arvore_localiza(a, 'e'));
//     
     system("pause");
          
      return 0;


}
