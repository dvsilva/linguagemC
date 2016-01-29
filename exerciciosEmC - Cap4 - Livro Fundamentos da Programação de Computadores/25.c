#include <stdio.h>
        
int main (){
   float numhoras, numhoraextra,numhorafaltadas,h,falta ;
   
   
  printf("Digite o numero de horas trabalhadas: ");
  scanf("%f", &numhoras);
  printf("Digite o numero de horas extras: ");
  scanf("%f", &numhoraextra);
  printf("\igite o numero de horas que faltou: ");
  scanf("%f", &falta);
  
  h= (numhoraextra-(2/3*(numhoras-falta)));
  
   if (h>2400)
      printf ("\nPremio: R$ 500.00");
           else { if ((h>=1800)&&(h<2400))
               printf ("\nPremio: R$ 400.00");
                   else { if ((h>=1200)&&(h<1800))
                   printf ("\nPremio: R$ 300.00");
                           else { if ((h>=600)&&(h<1200))
                           printf ("\nPremio: R$ 200.00");
                              else 
                                  printf ("\nPremio: R$ 100.00");
                                           }
                                           }
             
                             }                   
  
   
  getch();
  return 0;
}
