#include <stdio.h>

int main (){ 
    int a1,a2,a3;
    printf ("Calculando o terceiro angulo de um triangulo");
    printf ("\n\nDigite o angulo 1: ");
    scanf ("%d", &a1);
    printf ("Digite o angulo 2: ");
    scanf ("%d", &a2);
    
    a3=(180-(a1+a2));
    
    
    printf ("\nA medida do terceiro angulo e: %d",a3);
    
    getch();
    return 0;
}
