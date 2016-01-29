#include <stdio.h>
        
int main (){
   int  i;
   float valordatransacao,comprasavista=0,compraprazo=0,prestacao;
   char cod;
   
   printf ("Calculando as transacoes!");
   
    for (i=1;i<=15;i++)
    { 
      printf("\nDigite o codigo da transacao: ");
      scanf(" %c", &cod); 
      
      if ((cod=='v')||(cod=='p')||(cod=='V')||(cod=='P'))
      {
          printf("Digite o valor da transacao: ");
          scanf("%f", &valordatransacao);
        
           if ((cod=='v')||(cod=='V'))
              comprasavista= comprasavista + valordatransacao ;
               else 
                     compraprazo= compraprazo + valordatransacao ;                  
                                       
        }
         else{
          printf("\nCodigo invalido, digite novamente!");
          --i;
          }
          
        }
         
      printf("\nO valor total das compras a vsita e de : R$ %2.f",comprasavista);
      printf("\nO valor total das compras a prazo e de : R$ %2.f",compraprazo);
      printf("\nO valor total das compras efetuadas e de : R$ %2.f",(comprasavista+compraprazo));
      prestacao=(compraprazo/3);
      printf("\nO valor  da primeira prestacao e : R$ %2.f",prestacao);
      
  getch();
  return 0;
}
