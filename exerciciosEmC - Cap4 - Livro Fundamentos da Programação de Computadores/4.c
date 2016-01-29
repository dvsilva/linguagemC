#include <stdio.h>
        
int main (){
   int  n1=0, n2=0, n3=0;

  printf("Digite o primeiro numero:");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);
  printf("Digite o terceiro numero: ");
  scanf("%d", &n3);
 
    if ((n1>n2)&&(n1>n3))
       printf("\nO maior numero e: %d",n1);
    if ((n2>n1)&&(n2>n3))
       printf("\nO maior numero e: %d",n2);
    if ((n3>n1)&&(n3>n2))
       printf("\nO maior numero e: %d",n3);
      
            
  getch();
  return 0;
}
