#include <stdio.h>

int main(){
    
    float num1,num2;
   
   printf("Digite o primeiro numero: ");
   scanf("%f",&num1);
   printf("Digite o segundo numero: ");
   scanf("%f",&num2);
   
   printf("\nO numero %2.f  elevado a %2.f e igual a: %2.2f\n",num1,num2,pow(num1,num2));
   printf("\nA raiz quadrada de  %2.f e: %2.2f\n", num1, sqrt(num1));
   printf("A raiz quadrada de  %2.f e: %2.2f\n", num2, sqrt(num2));
   printf("\nA raiz cubica de %2.f e igual a: %2.2f",num1,cbrt(num1));
   printf("\nA raiz cubica de %2.f e igual a: %2.2f",num2,cbrt(num2));
              
                      

    getch();
    return 0;
}
