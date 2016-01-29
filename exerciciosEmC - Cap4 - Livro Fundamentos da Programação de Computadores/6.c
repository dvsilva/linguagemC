#include <stdio.h>
      
int main (){
   int  op ;
   float num1,num2;
  


  printf("Digite o primeiro numero: ");
  scanf("%f",&num1);
  printf("Digite o primeiro numero: ");
  scanf("%f",&num2);
   
  printf("\nMenu:");
  printf("\n1- primeiro numero elevado ao segundo");
  printf("\n2- raiz quadrada de cada um dos numeros");
  printf("\n3- raiz cubica de cada um dos numeros");
  
  printf("\nDigite o numero da opcao desejada: ");
  scanf("%d",&op);

     switch (op) 
     {
     case 1:
          
          printf ("\nO primeiro numero elevado ao segundo e igual a: %2.f",pow(num1,num2));
          break;
     case 2:
           
           printf ("\nA raiz quadrada de %2.f e: %2.f", num1,sqrt(num1));
           printf ("\nA raiz quadrada do %2.f e: %2.f", num2, sqrt(num2));
           break;
     case 3:
           
           printf ("\nA raiz cubica de %2.f e: %2.f",num1, cbrt(num1));
           printf ("\nA raiz cubica de %2.f e: %2.f",num2,  cbrt(num2));
           break;
     default:
             printf("\nTipo de operacao invalida!");
             break;
    }
    
     
        
                                      
  getch();
  return 0;
}
