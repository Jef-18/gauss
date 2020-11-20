#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	double soma;
	int i, entrada;
	printf("\n Digite valor a somar: ");
	scanf("%d", &entrada);

  	// Declare SYSTEMTIME struct
	SYSTEMTIME t; 
  	GetLocalTime(&t);
  	printf("\n Inicio.: %d:%d:%d\n", t.wMinute, t.wSecond, t.wMilliseconds);
		
	for (i = 1; i <= entrada; i++)
   {
		soma = soma + i;	
   }
   
    GetLocalTime(&t);
    printf("\n Fim....: %d:%d:%d\n", t.wMinute, t.wSecond, t.wMilliseconds);
    
	printf("\n Resultado: %.0f", soma);	
	return 0;

}
