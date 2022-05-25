/******************************************************************************

9) En dos vectores se tienen los goles de dos equipos en diferentes partidos que tuvieron entre si. 
En la posición 0 del vector equipoA están los goles de un partido por ese equipo y
en la misma posición del vector equipoB están los goles del otro equipo en ese mismo partido.
En la posición 1 de ambos vectores tendremos los goles para otro partido, etc. 
Se pide permitir que el usuario cargue los datos y mostrar cuántos empates han ocurrido.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int c=100;
   int x;
   int i=0;
   int equipoA[c];
   int equipoB[c];
   
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
	
	    if(equipoA[i]==equipoB[i])
	    {
	     x=x+1;
	    }
	    else{
	      x=x+0;
	    }
	   }
	   
	   printf("han ocurrido %d empates",x);
	   
	   return 0;
	 }

