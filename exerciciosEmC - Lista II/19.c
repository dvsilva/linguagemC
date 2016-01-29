#include <stdio.h>
  
int main(){
   int i,k,y;
   char  aux,
   msg[10] = {"GTYHJFDEOM"};
        y = 3;
        
        for (i=9; i>5; i--)
        {
        k = i - 7 + y;
        aux  = msg[i];
        msg[i] = msg[k];
        msg[k] = aux;
        }
        msg[i-5] = 'X';
        msg[i+2] = 'Y';
        
        for (i=0; i<10; i++)
        printf("%c\n",msg[i]);



  getch();
  return 0;
} 
 
