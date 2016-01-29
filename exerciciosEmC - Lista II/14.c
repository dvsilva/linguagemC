#include <stdio.h>
  
int main() { 
    int   x,y,k=0;
        for (x=1; x<3; x++)
        { 
            k += 2;
                for (y=2; y>0; y--)
                { 
                    k++;
                    printf("\n%d,%d,%d",x,y,k);
                }
        }
        

  getch();
  return 0;
} 
 
