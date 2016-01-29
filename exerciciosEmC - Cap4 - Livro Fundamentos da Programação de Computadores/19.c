#include <stdio.h>
        
int main (){
   float  h,pesoi;
   char  sexo;

  printf("Digite sua altura (em metros): ");
  scanf("%f", &h);
  printf("Digite seu sexo, M- sexo masculino e F- sexo feminino: ");
  scanf(" %c", &sexo);
 
  if ((sexo=='M')||(sexo=='m')){
     pesoi= ((72.7*h)-58);
     printf ("Seu peso ideal e %2.f Kg",pesoi);}
      else { if ((sexo=='F')||(sexo=='f')){
        pesoi= ((62.1*h)-44.7);
        printf ("Seu peso ideal e %2.f Kg",pesoi);}
             else
              printf ("Sexo invalido!");
          }
          
        
                                      
  getch();
  return 0;
}
