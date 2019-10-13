
#include <conio.h>
#include <stdio.h>

int main()
{
   int a,b,c,m;
   printf("numero 1: ");
   scanf("%d",&a); 
      
     printf("numero 2: ");
   scanf("%d",&b); 
      
  printf("numero 3: ");
   scanf("%d",&c); 
if(a>b && a>c){
printf("El mayor es el dato1: %d",a);
	
}else if(b>c && b>a){
	printf("El mayor es el dato2: %d",b);
	
}else if(c>a && c>b){
	printf("El mayor es el dato3: %d",c);
	 

}
return 0;
}
      




