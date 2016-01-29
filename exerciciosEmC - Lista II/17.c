#include <stdio.h>
  
int main(){
   int i;
        char  aux,  x[6] = {"XPRDFT"};
        for (i=0; i<5; i++)
        {
            aux  = x[i];
            x[i] = x[i + 1];
            x[i + 1] = aux;
        }
        for (i=0; i<6; i++)
            printf("%c\n",x[i]);
        

        

  getch();
  return 0;
} 
 
