#include <stdio.h>
#include <stdlib.h>

// FUN��O

//tipos de fun��o

// int , float , char , boolean , long , double. <-------- SEMPRE RETORNA UM VALOR ESPECIFICADO.
// VOID <----- N�O RETORNA VALOR NENHUM.

//tipo		  identifica��o		     argumentos
void            imprimir                   ()
  {
  printf("oi.");
}
//tipo        identifica��o          argumentos 
int            soma                   (int a)
{ 
	return a+1;
}

//tipo retorno 		IDENTIFICA��O 		argumentos
//int 				main				()	
int main() {
	
	
	
	printf("soma: %d \n",soma(4));
	
	imprimir();
	
	
		
	return 0;
}
	
// FUN��ES QUE N�O RETORNAM E QUE RETORNAM VALOR 

// n�o retorna
// void naoretorna()  //essas s�o chamadas de PROCEDURES  ou PROCEDIMENTOS
// {  printf("oi."); } 


// int retorna()  
//{ return 5; }

