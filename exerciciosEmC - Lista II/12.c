#include <stdio.h>
  
int main(void){
    int i,j, k;
    i = j = k = 5;
        while (i  >  1)
        {
            switch ( i )
            {
            case 3:
            printf("\n%d",k);
            i--;
            break;
            case 4:
            k += 2;
            printf("\n%d",j);
            case 5:
            j *= 2;
            printf("\n%d",k);
            i--;
            break;
            default:
            i--;
            printf("\n%d",i);
            }//fim do switch
        }//fim do while
        


  getch();
  return 0;
} 
 
