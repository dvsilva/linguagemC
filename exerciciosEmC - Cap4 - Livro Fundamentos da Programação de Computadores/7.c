#include <stdio.h>
        
int main (){
   float  salario, salariof;

  printf("Digite o valor do seu salario:");
  scanf("%f", &salario);
 
    if (salario<500.00)
    {
       salariof =(salario+((salario*30)/100));
       printf("O seu salario reajustado e de: %2.f",salariof);
       }
      else
      {
      printf("Salario maior que 500,00, sem direito ao reajuste!");
      printf("\nO seu salario e de: %2.f",salario);
      }   
      
            
  getch();
  return 0;
}
