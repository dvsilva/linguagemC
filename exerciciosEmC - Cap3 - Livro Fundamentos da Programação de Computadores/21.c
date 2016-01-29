#include <stdio.h>
#include <conio.h>

int main (){ 
    float numhoras,salariomin,numhoraex,salariobruto,horaex,salario;
    
    printf ("Digite o numero de horas trabalhadas:");
    scanf ("%f", &numhoras);
    printf ("Digite o valor do salario minimo:");
    scanf("%f", &salariomin);
    printf ("Digite o numero de horas extras trabalhadas:");
    scanf ("%f", &numhoraex);
    
    
   salariobruto = (numhoras * (1*salariomin/8));
   horaex = (numhoraex *(1*salariomin/4));
   salario= salariobruto+horaex;

    printf ("O salario final e: %2.f \n", salario);
    
    getch();
    return 0;
}
