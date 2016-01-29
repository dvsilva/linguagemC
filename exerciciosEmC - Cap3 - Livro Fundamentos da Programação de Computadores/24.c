#include <stdio.h>


int main (){ 
    float dinheiro,ddolar,dmalemao,dlesterlina;
    
    printf ("Digite a quantidade de dinheiro em reais:");
    scanf ("%f", &dinheiro); 
    
   ddolar = dinheiro*1.8;
   dmalemao = dinheiro*2;
   dlesterlina = dinheiro*1.57;

    printf ("Seu dinheiro vale: \n");
    printf (" Em dolares %2.f \n",ddolar);
    printf (" Em marco alemao %2.f \n",dmalemao);
    printf (" Em libra esterlina %2.f \n",dlesterlina);
    
    getch();
    return 0;
}
