#include <stdio.h>
#include <conio.h>

int main (){ 
    float peso, pa, pb;
    
    printf ("Digite o seu peso:");
    scanf ("%f", &peso);
    
    pa =(peso )+ (( peso*15)/100);
    pb = (peso )- (( peso*20)/100);
    
    printf ("O peso final se  engordar 15 por cento do seu peso e: %2.f \n", pa);
    printf ("O peso final se  emagrecer 20 por cento do seu peso e: %2.f \n", pb);
    getch();
    
    
    return 0;
}
