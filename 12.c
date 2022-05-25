/******************************************************************************

12) Dados los vectores del ejercicio anterior, imprima todas las combinaciones. 
Por ejemplo: 1ro de A con 1ro de B, 1ro de A con 2do de B, 1ro de A con 3ro de B....
2do de A con 1ro de B, 2do de A con 2do de B... etc.

*******************************************************************************/
#include <stdio.h>

int main()
{
int A[3];
int B[10];
int x;
int i;


printf ("ingresar datos para A: \n");
		
	for (i=0 ; i<=2 ; i++){
		scanf ("%d",&A[i]);
		
	}
	
	printf ("ingresar datos para B: \n");
	
	for (i=0 ; i<=9 ; i++){
		scanf ("%d",&B[i]);
	}
	
	for(i=0 ; i<=2 ; i++)
	{
	for(x=0 ; x<=9 ; x++)
	{
	 printf("%d, %d\n",A[i],B[x]);
	
	}
	}

	return 0;
	
}