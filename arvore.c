
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
	
	
	
	Arvore * inserePerguntaResposta(){
			
			printf("Informe uma pergunta: ");
	        scanf ("%s", p);  
	        pergunta = arvore_cria(p); 
			printf ("Informe a resposta certa: "); 
			scanf ("%s", resp_certa); 
			pergunta->sim = arvore_cria(resp_certa); 
			arvore_insere(pergunta, resp_certa);
			printf ("Informe a resposta errada: ");
			scanf("%s", resp_errada); 
			pergunta->nao = arvore_cria(resp_errada); 
			arvore_insere(pergunta, resp_errada);
	
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
				if (verifica_arvore(pergunta) == 0){
					printf ("Sou burro\n");
					inserePerguntaResposta();
				} else {
					printf("Reproduz o jogo\n");
					printf ("%s", pergunta->info);
					scanf ("%s", resposta);
					if (strcmp(resposta, "sim") == 0) {
						printf ("A resposta eh %s?\n", pergunta->sim);
						scanf ("%s", resposta);
						opc = 0;
					} else if (strcmp(resposta, "nao")== 0){
						printf ("A resposta eh %s\n", pergunta->nao);
						scanf ("%s", resposta);
						if (strcmp(resposta, "sim") == 0) {
							printf ("Descobri! A resposta eh %s\n", pergunta->sim);
							opc = 0;
						}else if (strcmp(resposta, "nao") == 0){
							printf ("Isso eh novo para mim, me ensina?");
							inserePerguntaResposta();
						}
					}
				}
		
			break;
			case 2:
				 inserePerguntaResposta();
			break;
		}
	} while (opc != 0);
	 
	 printf ("\nAdeus");
        
    
//     printf("\n Altura: %d", arvore_altura(pergunta));
////     
//     printf("\n Localizado valor %d", arvore_localiza(a, 'e'));
//     
     system("pause");
          
      return 0;


}
