/******************************************************************************

5)El usuario ingresa 5 edades (enteras) y 5 sueldos (float), correspondientes a 5 personas.
Muestre en pantalla los vectores con los valores ingresados.
Muestre en qué posición se encuentra la persona de más edad y en qué posición se encuentra el mayor sueldo.


*******************************************************************************/
#include <stdio.h>

int main(){
	
	int edad[5], i, max;
	float sueldo[5], maximo;
	
	printf ("ingresar las edades: \n");
		
	for (i=0 ; i<=4 ; i++){
		scanf ("%d",&edad[i]);
		
	}
	
	printf ("ingresar los sueldos \n");
	
	for (i=0 ; i<=4 ; i++){
		scanf ("%f",&sueldo[i]);
	}
	printf ("las edades son: \n");
	for (i=0 ; i<=4 ; i++){
		printf ("%d ",edad[i]);
	}
	
	printf ("\n");
	printf ("y los sueldos son: \n");
	for (i=0 ; i<=4 ; i++){
		printf ("%f ",sueldo[i]);
	}
	
	printf("\n");
	
	maximo = 0;
	
	for (i=0 ; i<=4 ; i++){
		if (edad[i]>maximo){
			maximo = edad[i];
			max = i;
		}
	}
	
	printf ("la edad mas grande esta en la posicion %d \n",max);
	
	maximo = 0;
	for (i=0 ; i<=4 ; i++){
		if (sueldo[i]>maximo){
			maximo = sueldo[i];
			max = i;
		}
	}
	printf ("el sueldo mas grande esta en la posicion %d \n",max);
	
	
	
	
	
	
}