
/*2)Escreva  um  programa  em  C  que  converta  um  número  decimal  para  binário.
 Dado  um número  inteiro  n,  a  conversão  é  feita  de  seguinte  forma:  divida  sucessivamente  n  por  2,
 guardando  os  restos  das  divisões,  até  obter  um  quociente  igual  a  0.  Os  restos  dessas divisões  representam
  os  dígitos  (0  ou  1)  do  número  binário  gerado.  No  entanto,  tais dígitos  são  gerados  na  ordem  inversa  (do  menos  para  o  mais  significativo).
   Portanto,  o programa   deve   usar   uma   pilha para   guardar   os   restos   das   divisões   que,   quando desempilhados e mostrados na tela, representam
    corretamente o número binário gerado.*/
    
    
#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;

  printf("digite um nº\n");

  scanf("%d", &n );

  PilhaGenerica p1;

  inicializa_pilha(&p1, sizeof(int), 32);
  int resto;
  do{
    resto = n%2;
    empilha(&p1, &resto);
    n = n / 2;
  }while(n>0);

  while(!pilha_vazia(p1)){
    desempilha(&p1, &resto);
    printf("%d", resto );
  }
  printf("\n");
  desaloca(&p1);

  /*
  while (desempilha(&p1, &resto) != ERRO_PILHA_VAZIA) {
    printf("%d",  resto );
  }
  */


  return 0;
}

