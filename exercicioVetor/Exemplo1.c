#include<stdio.h>
int main() {
    int num[10],i;
    
    printf("Vetor\n");
    
    for (i=0;i<=9;i++)
    {
        printf ("Digite um numero: ");
        scanf("%d",&num[i]);
    }
        
      for (i=9;i>=0;i--)
    {
        printf ("\n %d",num[i]);
        
        if (i==0)
        printf("\n\tFim!");
       
    }
        
    getch();
    return 0;
    
}
