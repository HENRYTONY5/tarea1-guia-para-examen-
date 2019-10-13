#include <conio.h>
#include <stdio.h>

int main()
{
    int horas=1, minutos=60, segundos=60, total;

   
    printf( "\n   Introduzca segundos: " );
    scanf( "%d", &segundos );
horas =  segundos /3600;
    minutos = segundos /60;
    

  
printf("horas: %d \n", horas);
   printf("minutos: %d \n", minutos);
  printf("segundos: %d \n", segundos);
  

 
}
