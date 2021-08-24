#include <stdlib.h>
#include <stdio.h>

typedef struct arv Arvore;

struct arv{
       char info[50];
       struct arv * sim; 
       struct arv * nao; 
       };
       
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
 
 void arvore_imprime (Arvore *a)
 {
 Arvore * p;
 printf("avanca ->%s\n", a->info);
 for (p=a->nao; p!= NULL; p=p->sim)
 {
  arvore_imprime(p);
 }
 printf("<-- volta\n");
 }
 
int arvore_localiza (Arvore *a, char c)
 {
 Arvore * p;
 if (a->info==c)
    return 1;
 else
 {
 for (p=a->nao; p!= NULL; p=p->sim)
  {
  if (arvore_localiza(p,c))
     return 1;
   }
return 0;
}
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
