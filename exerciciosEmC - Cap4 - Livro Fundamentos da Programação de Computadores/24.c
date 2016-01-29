#include <stdio.h>
        
int main (){
   float   preco, total,valordoaumento,imposto,novopreco;
   int  cat ;
   char sit;
   
  printf("Digite o preco do produto: ");
  scanf("%f", &preco);
  
  printf("\nMenu da categoria: ");
  printf("\n1- Limpeza");
  printf("\n2- Alimentacao");
  printf("\n3- Vestuario ");
  printf("\nDigite a categoria do produto: ");
  scanf("%d", &cat);
  
  if ((cat>=1)&&(cat<=3))
  {
          printf("\nMenu da situacao do produto: ");
          printf("\nR- Produtos que necessitam de refrigeracao");
          printf("\nN- Produtos que nao necessitam de refrigeracao ");
          printf("\nDigite a situacao do produtos : ");
          scanf(" %c", &sit);
          
          if ((sit='r')||(sit='R')||(sit='n')||(sit='N'))
          {
              if (preco<=25){
               switch (cat)
               {
                      case 1: 
                           valordoaumento = (preco*0.05);
                           printf("\nO valor do aumento e de: %2.2f",valordoaumento);
                           break;
                      case 2: 
                           valordoaumento = (preco*0.08);
                           printf("\nO valor do aumento e de:%2.2f",valordoaumento);
                           break;
                      case 3:
                           valordoaumento = (preco*0.1);
                           printf("\nO valor do aumento e de: %2.2f",valordoaumento);
                           break;
                           }
                           }         
                   else {
               switch (cat)
               {
                      case 1: 
                           valordoaumento = (preco*0.12);
                           printf("\nO valor do aumento e de %2.2f",valordoaumento);
                           break;
                      case 2: 
                           valordoaumento = (preco*0.15);
                           printf("\nO valor do aumento e de %2.2f",valordoaumento);
                           break;
                      case 3:
                           valordoaumento = (preco*0.18);
                           printf("\nO valor do aumento e de %2.2f",valordoaumento);
                           break;
                           }
                      }         
                
            
            if ((cat==2)||(sit='r')||(sit='R'))  {
            imposto=  (preco*0.05);
            printf("\nO valor do imposto e de : %2.2f",imposto);
            }
            else {
                 imposto=  (preco*0.08);
                 printf("\nO valor do imposto e de : %2.2f",imposto);
                 }
                 
           novopreco = ((preco+valordoaumento)-imposto);
           printf ("\nO novo preco do produto e de: %2.2f",novopreco);
           
           if (novopreco<=50.00)
                              printf ("\nClassificacao: Produto Barato");
                               else { if ((novopreco>50.00)&&(novopreco<120.00))
                                   printf ("\nClassificacao: Produto Normal");
                                          else { if (novopreco>=120.00)
                                                       printf ("\nClassificacao: Produto Caro");
                                                       }
                                                       }
                     
            }                   
          else printf ("\nSituacao invalida!");      
          }  
   else  printf ("\nCategoria invalida!");
   
   
  getch();
  return 0;
}
