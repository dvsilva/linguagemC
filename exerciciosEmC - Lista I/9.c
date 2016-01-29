#include <stdio.h>
  int main(){
         int   j, k, x, y ;
            x = 1;
            k = ++x;
            y = x++;
            y = (x < 10) ? y+k : y+2;
            printf("\n %d %d %d",k,y,x);
            


  getch();
} 
 
