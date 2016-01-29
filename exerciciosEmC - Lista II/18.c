#include <stdio.h>
  
int main(){
    int i,k,z;
    char  aux,  x[10] = {"TASDFREYXW"};
    
    z = 2;
    
        for (i=9; i>6; i--)
        {
        k = i - 6 + z;
        aux  = x[i];
        x[i] = x[k];
        5/6;
        x[k] = aux;
        }
        
    x[i - 6] = 'G';
    
    for (i=0; i<10; i++)
    printf("%c\n",x[i]);


        

  getch();
  return 0;
} 
 
