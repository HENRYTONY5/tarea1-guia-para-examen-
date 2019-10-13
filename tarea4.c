#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float h,e,t,cm;
	printf ("Escriba su estatura en metros. \n Ejemplo: 1.75\n");
	scanf("%f",&h);
	printf ("Escriba su edad.\n");
	scanf("%f",&e);
	printf("  	altura: %f",h);
	printf("\n 	edad: %f \n",e);
	cm= h*100;
	t =((cm-100)+(e*0.10))*0.9;

	printf("\n Peso recomendado: %f",t);
	
	return 0;
}
