#include <stdio.h>
#include <stdlib.h>

// FUNÇÃO

//tipos de função

// int , float , char , boolean , long , double. <-------- SEMPRE RETORNA UM VALOR ESPECIFICADO.
// VOID <----- NÃO RETORNA VALOR NENHUM.

//tipo		  identificação		     argumentos
void            imprimir                   ()
  {
  printf("oi.");
}
//tipo        identificação          argumentos 
int            soma                   (int a)
{ 
	return a+1;
}

//tipo retorno 		IDENTIFICAÇÃO 		argumentos
//int 				main				()	
int main() {
	
	
	
	printf("soma: %d \n",soma(4));
	
	imprimir();
	
	
		
	return 0;
}
	
// FUNÇÕES QUE NÃO RETORNAM E QUE RETORNAM VALOR 

// não retorna
// void naoretorna()  //essas são chamadas de PROCEDURES  ou PROCEDIMENTOS
// {  printf("oi."); } 


// int retorna()  
//{ return 5; }

