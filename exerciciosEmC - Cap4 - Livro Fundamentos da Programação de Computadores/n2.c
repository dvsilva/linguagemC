#include <stdio.h>

int main (){
    float n1=0,n2=0,media=0;
    printf ("Digite a nota 1: ");
    scanf ("%f",&n1);
    printf ("Digite a nota 2: ");
    scanf ("%f",&n2);
    
    media=(n1+n2)/2;
    
    if (media >=7.0) 
             printf("Aprovado");
         else { if ((media >=4.0) && (media < 7.0))
                  printf ("Necesidade de um novo exame!");
                  
                  else 
                       printf ("Reprovado");
                } 
     
getch();

}
