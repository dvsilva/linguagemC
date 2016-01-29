#include <stdio.h>
        
int main (){
   float  sa, aumento, ns;

  printf("Digite o valor do seu salario atual: ");
  scanf("%f", &sa);
 
  if (sa>900.00)
   aumento = 0;
   else { if ((sa<=900.00)&&(sa>600.00))
             aumento= ((5*sa)/100);
             
              else { if ((sa>300.00)&&(sa<=600.00))
                        aumento= ((10*sa)/100);
                        
                        else 
                             aumento= ((15*sa)/100);
                        
                             }      
        }  
        
        ns= (sa+ aumento);
        printf("\nO valor do aumento salarial e: %2.f",aumento);
        printf("\nO valor do novo salario e: %2.f",ns);
        
                                      
  getch();
  return 0;
}
