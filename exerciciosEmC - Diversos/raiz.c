#include <stdio.h>

int main(){
    float num,raiz;
  
    printf("Digite um numero: ");
    scanf("%f",&num);
   
    raiz = sqrt(num);
    printf("A raiz quadrada de %2.f e: %2.f\n", num, raiz);
   
    getch();
    return 0;
}
