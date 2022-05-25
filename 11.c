/******************************************************************************

11)Dado un vector de enteros A con 3 posiciones y otro B de 10 posiciones, 
indique si todos los elementos de A se encuentran al menos una vez en B, o no.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[3];
    int B[10];
    int i;
    int x;
    int c=0;
    int d=0;
    int e=0;
    
    printf ("ingresar datos para A: \n");
		
	for (i=0 ; i<=2 ; i++){
		scanf ("%d",&A[i]);
		
	}
	
	printf ("ingresar datos para B: \n");
	
	for (i=0 ; i<=9 ; i++){
		scanf ("%d",&B[i]);
	}
	
	for (i=0 ; i<=9 ; i++){
	    
	    if(A[0]==B[i])
	    {c=c+1;}
	    
	    if(A[1]==B[i])
	    {d=d+1;}
	    
	    if(A[2]==B[i])
	    {e=e+1;}
	}
	
	if(e>0 && d>0 && c>0)
	{printf("todos los elementos de a se encuentran al menos una vez en b");}
	else
	{printf("no se encuentran todos los elementos de a  al menos una vez en b");}

}