#include <stdio.h>
        
int main (){
   float  sm, valordocredito;

  printf("Digite o valor do seu saldo medio:");
  scanf("%f", &sm);
 
  if (sm>400.00)
   valordocredito= ((sm*30)/100);
   else { if ((sm<=400.00)&&(sm>300.00))
             valordocredito= ((sm*25)/100);
             
              else { if ((sm<=300.00)&&(sm>200.00))
                        valordocredito= ((sm*20)/100);
                        
                        else 
                             valordocredito= ((sm*10)/100);
                             
                             }      
        }  
        
        printf("\nO valor do saldo medio e: %2.f",sm);
        printf("\nO valor do credito e: %2.f",valordocredito);
                                      
  getch();
  return 0;
}
