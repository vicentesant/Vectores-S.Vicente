/******************************************************************************

6) El usuario ingresa el DNI (entero) de 10 estudiantes y su calificación (float).
Muestre en pantalla el DNI de los estudiantes que aprobaron.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int dni[10];
 float calificacion[10];
 int i=0;
 
 for(i=0; i<10; i++)
    {
    printf("Ingrese los dni: ");
    scanf("%d", &dni[i]);
    }
    
 for(i=0; i<10; i++)
    {
    printf("Ingrese las calificaciones: ");
    scanf("%f", &calificacion[i]);
    }
    
 for(i=0; i<10; i++)
 {
    if(calificacion[i]>=6)
    {
    printf("aprobo:%d\n",dni[i]);
    }
 }
}