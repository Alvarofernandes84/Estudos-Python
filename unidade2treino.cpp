#include <stdio.h>
#include <stdlib.h>

int soma ( int a, int b)
{ 
	return (a + b);
};

int main(int argc, char *argv[]) 
{
	
	int a = 5;
	int b = 5;
	
	printf("soma: %d", soma(a,b));
	return 0;
}
