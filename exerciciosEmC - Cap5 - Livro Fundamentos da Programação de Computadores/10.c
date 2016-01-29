#include <stdio.h>
        
int main (){
   float num, contpr, contpa;
   int i;
   

   
   printf("Quantidades");
   
    for (i=1;i<=10;i++)
    { 
    printf("\nDigite um numero: ");
    scanf("%f",&num);
    
    if ( num % 2 == 0)
    contpa= num+contpa;
    
    if ((num % num==0)&&(num % 1==0))
    contpr = num + contpr;
    
    }
    
  getch();
  return 0;
}
