#include <stdio.h>
  
int main(){
int  i, j, k;
i = j = k = 5;
    while (i  >  2)
    {
        switch ( i )
        {
            case 4:
            k += 2;
            printf("%d ",j);
            case 5:
            j *= 4;
            printf("%d ",k);
            i--;
            break;
            default:
            i--;
            printf("%d",i);
        }
    }

  getch();
  return 0;
} 
 
