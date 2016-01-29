#include <stdio.h>
  int main(){
        int x=3, y=5, k=7;
        while (k > 3){
        x *= 2;
        y = (x < 10) ? y+k : y+2;
        k--;
        printf("\n%d%d%d",k,y,x);
        }

  getch();
} 
 
