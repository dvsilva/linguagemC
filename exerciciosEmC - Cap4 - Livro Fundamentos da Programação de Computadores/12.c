#include <stdio.h>
        
int main (){
   float  sb, gratificacao, sf;

  printf("Digite o valor do seu salario bruto:");
  scanf("%f", &sb);
 
  if (sb>900.00)
   gratificacao= 35.00;
   else { if ((sb<=900.00)&&(sb>600.00))
             gratificacao= 50.00;
             
              else { if ((sb>350.00)&&(sb<=600.00))
                        gratificacao= 75.00;
                        
                        else 
                             gratificacao= 100.00;
                        
                             }      
        }  
        
        sf= (sb-((sb*7)/100))+ gratificacao;
        printf("\nO valor do salario final e: %2.f",sf);
        
                                      
  getch();
  return 0;
}
