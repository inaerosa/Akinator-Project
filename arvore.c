#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Arvore.h"


int main(){

    char p[50];
   
 	int cont=0;
 	char resposta[3];
 	int opc;
 	Arvore * pergunta;
 	Arvore * certa;
 	Arvore * errada;
 	Arvore * aux;
 	char resp_certa[50];
	char resp_errada[50];
	char respota[3];
	
	int verifica_arvore(Arvore * raiz){
		if (raiz == NULL){
			return 0;
		} else {
			return 1;
		}
	}
	
	pergunta = arvore_cria(p); 
	Arvore * inserePerguntaResposta(){
		if (cont == 0){
			printf("Informe uma pergunta: ");
			fflush(stdin);
	        scanf ("%s", p);  
	       	pergunta = arvore_cria(p); 
			printf ("Informe a resposta certa: "); 
			fflush(stdin);
			scanf ("%s", resp_certa); 
			pergunta->sim = arvore_cria(resp_certa); 
			printf ("Informe a resposta errada: ");
			fflush(stdin);
			scanf("%s", resp_errada); 
			pergunta->nao = arvore_cria(resp_errada); 
			cont++;
		 }else {
			Arvore * aux = pergunta->nao;
			if (aux->nao !=NULL){
			while(aux->nao != NULL)
       		{
       			aux=aux->nao;
			   }
			}
			printf("Informe uma pergunta: ");
			fflush(stdin);
        	scanf ("%s", p); 
			printf ("Informe a resposta certa: ");
			fflush(stdin); 
			scanf ("%s", resp_certa); 
			aux->sim = arvore_cria(resp_certa); 
			printf ("Informe a resposta errada: ");
			fflush(stdin);
			scanf("%s", resp_errada); 
			
			aux->nao = arvore_cria(resp_errada); 
			
		}
	}
	do{
		printf("------------AKINATOR-------------\n");
		printf ("          [0] - Sair            |\n");
		printf ("          [1] - Jogar           |\n");
		printf ("         [2] - Ensinar          |\n");
		scanf ("%d", &opc);
		printf ("--------------------------------\n");
		switch (opc){
			case 1:
				
				if (pergunta==NULL){
					printf ("Me ensine alguma coisa :)\n");
					inserePerguntaResposta();
				} else {
					aux=pergunta;
					while(aux->nao!=NULL){
						printf("A resposta eh %s?\n", aux->sim);
						scanf("%s", resposta);
						if(strcmp(resposta,"sim")==0){
							system("cls");
							printf ("Descobri! A resposta eh %s\n", aux->sim);
							return 0;
						}
						else if(strcmp(resposta,"nao")==0){
							printf("A resposta eh %s?\n", aux->nao);
							scanf("%s", resposta);
							if(strcmp(resposta,"sim")==0){
								system("cls");
								printf ("Descobri! A resposta eh %s\n", aux->nao);
								return 0;
							}
						}
						aux=aux->nao;
					}
					if (aux->nao==NULL){
						printf ("Isso eh novo para mim, me ensina?\n\n");
						inserePerguntaResposta();
					}
				}
				
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
