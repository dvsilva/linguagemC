#include <stdio.h>
#include <conio.h>

int main (){ 
    float salario,vvendas,salariof,comissao;
    
    printf ("Digite o seu salario:");
    scanf ("%f", &salario);
    printf ("Digite o valor de suas vendas:");
    scanf("%f", &vvendas);
    
    comissao= ((vvendas*4)/100);
    salariof = salario + comissao;
    
    printf ("O salario final e: %2.f \n", salariof);
    printf ("O valor da comissao e: %2.f \n", comissao);
    getch();
    
    
    return 0;
}
