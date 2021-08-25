
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Arvore.h"


int main(){

    char p[50];
   
 	int cont=0;
 	char resposta[3];
 	int opc;
 	
 	char resp_certa[50];
	char resp_errada[50];
	
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
				
//					printf ("é um menino?");				
//					scanf ("%s", r);
//					if (strcmp(r, "sim") == 0){ 
//        				r->c = insere(r->direita, conteudo);

//            	
//            			arvore_imprime(pergunta);
//        			} else if (strcmp(r, "nao") == 0){
//        				
//            			arvore_insere(pergunta,nao);
//            			
//        			}
//					
			break;
			case 2:
    				printf("Informe uma pergunta: ");
        			scanf ("%s", p);  //é menino?
        			Arvore * pergunta = arvore_cria(p); //cria uma folha pergunta
        			printf ("Informe a resposta certa: "); 
        			scanf ("%s", resp_certa); //se o usuario informar sim, é o mickey
        			Arvore * certa = arvore_cria(resp_certa); //crio uma folha pra resposta certa
        			arvore_insere(pergunta, resp_certa);
        			printf ("Informe a resposta errada: ");
        			scanf("%s", resp_errada); //se o usuario informar que não, é a minnie?
        			Arvore * errada = arvore_cria(resp_errada); //crio uma folha pra respota errada
        			arvore_insere(pergunta, resp_errada);
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
