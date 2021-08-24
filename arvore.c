
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Arvore.h"


int main(){

	//primeiro cria pergunta e pergunta resposta
	
	//criação de alocação de memória
//	Arvore * pergunta = arvore_cria(); //folha pra pergunta
//    Arvore * sim = arvore_cria(); //folha pra resposta sim
//    Arvore * nao = arvore_cria(); //folha pra resposta nao
//    Arvore * proxP = arvore_cria(); //folha de proxima pergunta (caso pergunta retorne nao
    
    //criacao de variavies auxiliares
    char p[50];
    char r[3];
    int verifica;
     //no minimo duas perguntas
     
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
        }
        cont++;
	} while(cont > 3 &&   )
        
     
     
     
 
     
//     printf("\n Altura: %d", arvore_altura(pergunta));
////     
//     printf("\n Localizado valor %d", arvore_localiza(a, 'e'));
//     
     system("pause");
          
      return 0;


}
