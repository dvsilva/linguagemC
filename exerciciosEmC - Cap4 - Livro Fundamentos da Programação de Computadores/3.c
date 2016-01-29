#include <stdio.h>
        
int main (){
   int  n1=0, n2=0;
   

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);
 
    if (n1<n2)
       printf("\nO menor numero e: %d",n1);
     else
         printf("\nO menor numero e:%d",n2);
      
            
  getch ();
  return 0;
}
