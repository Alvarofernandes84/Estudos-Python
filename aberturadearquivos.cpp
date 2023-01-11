#include <stdio.h>
#include <stdlib.h>
 int main()
 { 
   FILE *arq;
   arq = fopen("Desktop\\ Doc. Alvinho \\ arq.txt" ,"w")
   
   if(arq == NULL)
    printf("ERRO NA ABERTURA DO ARQUIVO")
   
   else
    prinf("ARQUIVO ABERTO COM SUCESSO") 
 }
