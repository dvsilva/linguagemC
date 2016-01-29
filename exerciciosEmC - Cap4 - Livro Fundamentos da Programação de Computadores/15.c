#include <stdio.h>
        
int main (){
   int  t ;
   float  valor,valorcorrigido ;

  printf("Menu:");
  printf("\n\n1- poupanca");
  printf("\n2- fundos de renda fixa");

  printf("\n\nDigite o tipo de investimento: ");
  scanf("%d", &t);
  printf("Digite o valor do investimento: ");
  scanf("%f", &valor);

 switch (t) 
 {
 case 1:
      valorcorrigido= (valor+ ((valor*3)/100));
      printf ("\nO valor corrigido e de: %2.f", valorcorrigido);
      break;
 case 2:
       valorcorrigido= (valor+ ((valor*4)/100));
       printf ("\nO valor corrigido e de: %2.f", valorcorrigido);
       break;
 default:
         printf("\nTipo de investimento invalido");
         break;
}
    
     
        
                                      
  getch();
  return 0;
}
