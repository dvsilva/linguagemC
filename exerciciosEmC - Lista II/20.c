#include <stdio.h>
  
int main(){
   int   x,j, k;
   char  aux, msg[11]={"AEYWOUCVTXY"};
   x = 3;
   
        for (k=10; k>7; k--)
        { 
        j = k - 7 + x;
        aux = msg[k];
        msg[k] = msg[j];
        msg[j] = aux;
        }
        msg[k-6] = msg[k-2];
        msg[k-2] = msg[k+2];
        msg[k+2] = 'L';
        
        for (k=0; k<=10; k++)
        printf("%c",msg[k]);


  getch();
  return 0;
} 
 
