#include <stdio.h>
  
int main(){
int x=0, k=7;
    while (k > 3)
    {
        switch (k)
        {
            case 7: x++;
            break;
            case 6: x+=2;
            break;
            case 5: x+=3;
            case 4: x+=4;
            default: x--;
        }
        printf("\n%d,%d",k,x);
        k--;
        }

  getch();
  return 0;
} 
 
