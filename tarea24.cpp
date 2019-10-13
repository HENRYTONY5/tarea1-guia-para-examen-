#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
int n,j=2;
int s;
printf("Indique estado: ");
scanf("%d",&n);

switch(n){
	case 1: printf("Calor \n"); break;
	case 2: printf("templado\n"); break;
	
	case 3: printf("frior \n"); break;
	case 4: printf("fuera de rango\n"); break;
	default: printf("no es opc.");
}


}
