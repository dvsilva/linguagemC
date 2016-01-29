#include <stdio.h>

int main(){
    float num1,num2,cont=1 ;
    int i;
   
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
   printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    
    for (i=1;i<=num2;i++){
    cont=cont*num1;
    }
    
    printf("%2.f  elevado a %2.f e igual a: %2.f",num1,num2,cont);
   
    getch();
    return 0;
}
