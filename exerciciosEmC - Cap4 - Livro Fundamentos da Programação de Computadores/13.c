#include <stdio.h>
        
int main (){
   float  produto, np;

  printf("Digite o valor do produto: ");
  scanf("%f", &produto);
 
  if (produto<=50.00)
   np = ((0.05*produto)+ produto);
   else { if ((produto<=100.00)&&(produto>50.00))
             np=((0.1*produto)+ produto);
                        else 
                             np=((0.15*produto)+ produto);
                        
                                  
        }  
        
     printf("\nO novo preco do produto e: %2.f",np);
        
   if (np<=80.00)
     printf ("\nProduto Barato!");
   else { if ((produto<=120.00)&&(produto>80.00))
             printf ("\nProduto Normal!");
             else { if ((produto<=200.00)&&(produto>120.00))
                  printf ("\nProduto Caro!");
                        else 
                            printf ("\nProduto Muito Caro!");
                        
                             }      
        }  
        
        
        
        
                                      
  getch();
  return 0;
}
