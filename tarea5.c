#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float h,e=3.1416,t,cm;
	
	printf (" Indroduzca radio: \n");
	scanf("%f",&h);
	
	t = e*(h*h);
	cm = (h*2)*(2*e*h);

	printf("\n 	circunferencia: %f \n",cm);


	printf("\n area: %f",t);
	
	return 0;
}
