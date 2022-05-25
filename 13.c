/**************************

13) Dado un vector con 5 enteros, imprima en pantalla si es monótono o no,
es decir si todos los números son crecientes, decrecientes o ninguno de los anteriores.

***************************/
#include <stdio.h>

int main()
{
int A[5];
int x=0;
int i;


printf ("ingresar datos para A: \n");
		
	for (i=0 ; i<=4 ; i++){
		scanf ("%d",&A[i]);
		
	}
	
	if(A[0]<=A[1])
	{
	    if(A[1]<=A[2])
	    {
	        if(A[2]<=A[3])
	        {
	            if(A[3]<=A[4])
	            {
	                printf("es creciente");
	            }else{ x=x+1;}
	        }else{ x=x+1;}
	    }else{ x=x+1;}
	}
	else
	{
	 x=x+1;
	}
	
	
		if(A[0]>=A[1])
	{
	    if(A[1]>=A[2])
	    {
	        if(A[2]>=A[3])
	        {
	            if(A[3]>=A[4])
	            {
	                printf("es decreciente");
	            }else{ x=x+1;}
	    }else{ x=x+1;}
	
	    
	}
	else
	{
	 x=x+1;
	}
	
	if(x==2)
	{
	   printf("no es creciente ni decreciente");
	}
	}

    
}
	