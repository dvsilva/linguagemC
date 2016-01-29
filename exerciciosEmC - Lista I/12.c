#include <stdio.h>
  int main(){
        int   x=20, y=12,  k=0;
            for (x=1; x<3; x++)
            {
            k = k + 1;
                for (y=3; y<6; y+=2)
                {
                k++;
                printf("\n%d%d%d",x,y,k);
                }
            }

 


  getch();
} 
 
