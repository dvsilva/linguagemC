#include <stdio.h>
        
int main (){
   int  i,idade,faixaetaria1=0,faixaetaria2=0,faixaetaria3=0,faixaetaria4=0,faixaetaria5=0;
   float porcentagem,soma,por;
   
    for (i=1;i<=15;i++)
    {   
      printf("Digite sua idade: ");
      scanf("%d", &idade);
    
       if (idade<=15)
          faixaetaria1= (faixaetaria1+ 1);
           else { if ((idade>=16)&&(idade<=30))
               faixaetaria2= (faixaetaria2+ 1);
                 else { if ((idade>=31)&&(idade<=45))
                   faixaetaria3= (faixaetaria3+ 1);
                   else { if ((idade>=16)&&(idade<=30))
                       faixaetaria4= (faixaetaria4+ 1);
                         else 
                                faixaetaria5= (faixaetaria5+ 1);
                                   }
                                   }
                                   }
                                   }
                                   
                                                       
      printf("\nA quantidade de idades na primeira faixa etaria e igual a: %d",faixaetaria1);
      printf("\nA quantidade de idades na segunda faixa etaria e igual a: %d",faixaetaria2);
      printf("\nA quantidade de idades na teceira faixa etaria e igual a: %d",faixaetaria3);
      printf("\nA quantidade de idades na quarta faixa etaria e igual a: %d",faixaetaria4);
      printf("\nA quantidade de idades na quinta faixa etaria e igual a: %d",faixaetaria5);
                        
      
    soma =(faixaetaria1+faixaetaria5);
    por= (soma/15);
    porcentagem = por*100;
    
    printf ("\n\nA porcentagem de pessoas na faixa 1 e 5 e de: %2.f por cento",porcentagem);
    printf ("\nA porcentagem de pessoas nas outras faixas e de: %2.f por cento",(100-porcentagem));
    
  getch();
  return 0;
}
