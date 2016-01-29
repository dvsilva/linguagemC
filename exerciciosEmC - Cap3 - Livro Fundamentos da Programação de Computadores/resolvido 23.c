#include <stdio.h>

int main (){ 
    float num,f,i,a;
    printf ("Calculos sobre o numero real");
    printf ("\n\nDigite um numero real: ");
    scanf ("%f", &num);
   
    i= num;
    f = num-i;
    a = round (num);
    
    printf ("\n%2.f",num);
    printf ("\n%f",f);
    printf ("\n%2.f",a);
    
    
    getch();
    return 0;
}
