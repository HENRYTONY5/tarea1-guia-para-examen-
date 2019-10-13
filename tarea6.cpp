#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <String.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
    int numero;

    printf( "\n   Introduzca un numero entero: " );
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n   ES PAR" );
    else
        printf( "\n   ES IMPAR" );
        
	return 0;
}
