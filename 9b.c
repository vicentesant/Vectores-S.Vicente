/******************************************************************************

9b) Al ejercicio anterior agregue que se muestre cuál equipo es el ganador (A ó B). 
El ganador final es el que más partidos ha ganado.
Considere que pueden tener igual cantidad de partidos ganados, en cuyo caso se dictamina un empate.


*******************************************************************************/
#include <stdio.h>

int main()
{
   int c=100;
   int x;
   int i=0;
   int equipoA[c];
   int equipoB[c];
   int z=0;
   int y=0;
   
   printf("ingresar cantidad de partidos:");
   scanf("%d",&c);
   
   
   printf ("ingresar los goles del equipoA: \n");
		
	for (i=0 ; i<c ; i++){
		scanf ("%d",&equipoA[i]);
		
	}
	
	printf ("ingresar los goles del equipoB: \n");
		
	for (i=0 ; i<c ; i++){
		scanf ("%d",&equipoB[i]);
		
	}
	
	for (i=0 ; i<c ; i++){
	
	    if(equipoA[i]>=equipoB[i])
	    {
	     y=y+1;
	    }
	    else{
	      y=y+0;
	    }
	   }
	   
	   
	  for (i=0 ; i<c ; i++){
	
	    if(equipoA[i]<=equipoB[i])
	    {
	     z=z+1;
	    }
	    else{
	      z=z+0;
	    }
	   }
	   
	   if(z==y){
	       printf("no hay un ganador final hubo empate");
	       
	   }
	   else
	   {
	       if(z<y)
	       {printf("el ganador final es el equipoA");}
	       else
	       {printf("el ganador final es el equipoB");}
	   }
	  
	   return 0;
	 }

