#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct arv Arvore;
struct arv{
       char info[50];
       struct arv * sim; 
       struct arv * nao; 
};


	int cont=0;
	char p[50];
	 	char resp_certa[50];
	char resp_errada[50];
	Arvore * pergunta;
	Arvore * certa;
	Arvore * errada;
Arvore * aux;




       
Arvore * arvore_cria(char c[]){
 	Arvore * n = (Arvore *) malloc (sizeof(Arvore));
 	strcpy(n->info, c);
 	n->nao = NULL;
 	n->sim = NULL;
 return n;
 }
 
 void arvore_insere(Arvore * a, Arvore * b){
  	b->sim = a->nao;
  	a->nao = b;
 }
 
 void arvore_imprime (Arvore *a){
 	Arvore * p;
 	printf("avanca ->%s\n", a->info);
 	for (p=a->nao; p!= NULL; p=p->sim){
  		arvore_imprime(p);
	}
 	printf("<-- volta\n");
}
 

 
 
 
 int arvore_altura(Arvore *a)
 {
 int hmax =  -1; 
 Arvore *p; 
 for (p=a->nao; p!= NULL; p=p->sim)
 {
  int h = arvore_altura(p);
  if (h > hmax)
     hmax = h;
 }
return hmax + 1; 
}


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
				while(aux->nao != NULL){
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
	
	
	
