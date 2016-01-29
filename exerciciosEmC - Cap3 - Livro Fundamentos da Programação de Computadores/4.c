    #include <stdio.h>
   
    int main() {
        float n1,n2,nfinal;
      
     printf("Escreva a nota 1: " );
      scanf ("%f",&n1);
      
         if ((n1>=0)&(n1<=10)) {
              printf("Escreva a nota 2: " );
               scanf ("%f",&n2);
               
               if ((n2 >= 0)&(n2 <= 10)) {
               nfinal= ((n1*2)+ (n2*3)) /5;
               printf ("\nA media do e %2.f",nfinal);
               }
                  else{
                 printf (" A nota 2 e invalida!");
                 }
                 }   
           else {
           printf (" A nota 1 e invalida!");
           }
           
      getch();
      return 0;
    
    }
