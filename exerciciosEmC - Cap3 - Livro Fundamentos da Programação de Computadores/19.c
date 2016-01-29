#include <stdio.h>

int main (){ 
    float comprimento, largura, area, potencia;
    printf ("Calculando a area e a potencia de iluminacao que deve ser utilizada em um comodo");
    printf ("\nDigite o compimento do comodo: ");
    scanf ("%f", &comprimento);
    printf ("Digite a largura do comodo: ");
    scanf ("%f", &largura);
    
    area= (comprimento*largura);
    potencia= (area*18);
    
    printf ("\n\tA area do comodo e: %2.f metros quadrados!",area);
    printf ("\n\tA potencia de iluminacao que devera ser utilizada e: %2.f W" ,potencia);
    getch();
    return 0;
}
