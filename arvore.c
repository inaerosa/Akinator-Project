#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Arvore.h"


 	char resposta[3];
 	int opc;	
 	
 


	int jogo (){
			if (pergunta==NULL){
					printf ("Me ensine alguma coisa :)\n");
					inserePerguntaResposta();
				} else {
					aux=pergunta;
					while(aux->nao!=NULL){
						printf("O que voce esta pensando %s?\n", aux->info);
						scanf("%s", resposta);
						if(strcmp(resposta,"sim")==0){
							printf("eh %s?", aux->sim);
							scanf ("%s", resposta);
							if (strcmp(resposta, "sim")== 0){
								system("cls");
								printf ("Descobri! A resposta eh %s\n", aux->sim);
								exit(1);
							} else if(strcmp(resposta,"nao")==0){
								printf("A resposta eh %s?\n", aux->nao);
								scanf("%s", resposta);
								if(strcmp(resposta,"sim")==0){
									system("cls");
									printf ("Descobri! A resposta eh %s\n", aux->nao);
									exit(1);
								}
								
							}
							
						} else if(strcmp(resposta,"nao")==0){
							printf("A resposta eh %s?\n", aux->nao);
							scanf("%s", resposta);
							if(strcmp(resposta,"sim")==0){
								system("cls");
								printf ("Descobri! A resposta eh %s\n", aux->nao);
								exit(1);
							}
							
						}
						
					aux = aux->nao;
					}
					if (aux->nao==NULL){
						printf ("Isso eh novo para mim, me ensina?\n\n");
						inserePerguntaResposta();
					}
			
				}
	}
	
	
	
int main(){
	
	pergunta = arvore_cria(p); 

	do{
		printf("------------AKINATOR-------------\n");
		printf ("          [0] - Sair            |\n");
		printf ("          [1] - Jogar           |\n");
		printf ("         [2] - Ensinar          |\n");
		scanf ("%d", &opc);
		printf ("--------------------------------\n");
		switch (opc){
			case 1:
				jogo();
			break;
			case 2:
				 inserePerguntaResposta();
			break;
		}
		
	} while (opc != 0);
	 
	 printf ("\nAdeus");

     system("pause");
          
      return 0;


}
