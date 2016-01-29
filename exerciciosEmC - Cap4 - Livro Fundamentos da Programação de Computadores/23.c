#include <stdio.h>
        
int main (){
   float   precodanota, total;
   int  codigo, qt ;
   
  printf("Digite o codigo do produto: ");
  scanf("%d", &codigo);
  printf("Digite a quantidade de produtos comprados: ");
  scanf("%d", &qt);
 
  if ((codigo>=1)&&(codigo<=10)){
   printf ("\nO preco unitario e de R$10");
   precodanota= (qt*10);
   printf ("\nO preco total da nota e de R$ %2.f",precodanota);}
       else { if ((codigo>=11)&&(codigo<=20)){
                 printf ("\nO preco unitario e de R$15");
                 precodanota= (qt*15);
                 printf ("\nO preco total da nota e de R$ %2.f",precodanota);}
                  else { if ((codigo>=21)&&(codigo<=30)){
                            printf ("\nO preco unitario e de R$20");
                            precodanota= (qt*20);
                            printf ("\nO preco total da nota e de R$ %2.f",precodanota);}
                             else { if ((codigo>=31)&&(codigo<=40)){
                                printf ("\nO preco unitario e de R$30");
                                precodanota= (qt*30);
                                printf ("\nO preco total da nota e de R$ %2.f",precodanota);}
                                        else 
                                             printf ("Codigo Invalido!");
                                        
                                }      
                        }  
                  }
                        
        
        if ((codigo>=1)&&(codigo<=40)){
            if (precodanota<=250.00){
               total=(precodanota-(0.05*precodanota));
               printf ("\nO total com desconto e de R$ %2.f",total);}
               
               else { if ((precodanota<=500.00)&&(precodanota>250.00)){
                   total=(precodanota-(0.1*precodanota));
                   printf ("\nO total com desconto e de R$ %2.f",total);}
                         
                          else { if (precodanota>500.00){
                                       total=(precodanota-(0.15*precodanota));
                                       printf ("\nO total com desconto e de R$ %2.f",total);}
                                    
                                  
                                     
                                     }      
                }  
        
        }
        
                                      
  getch();
  return 0;
}
