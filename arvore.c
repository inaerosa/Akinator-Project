
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
				do{
    				printf("Informe uma pergunta: ");
        			scanf ("%s", p);
        			Arvore * pergunta = arvore_cria(p);
        			printf ("Informe a resposta: ");
        			scanf ("%s", r);
        			if (strcmp(r, "sim") == 0){ 
        				Arvore * sim = arvore_cria(r);
            			arvore_insere(pergunta,sim);
            			arvore_imprime(pergunta);
        			} else if (strcmp(r, "nao") == 0){
        				Arvore * nao = arvore_cria(r);
            			arvore_insere(pergunta,nao);
            			printf ("Outra pergunta: ");
            			scanf ("%s", p);
            			printf ("Informe a resposta: ");
            			scanf ("%s", r);
            			Arvore * pAux = arvore_cria(p);
            			arvore_insere(pAux, r);
            			arvore_imprime(pAux);
        			}
       			 cont++;
				} while(cont > 2);
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
