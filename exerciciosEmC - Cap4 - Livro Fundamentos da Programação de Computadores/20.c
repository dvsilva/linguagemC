#include <stdio.h>
        
int main (){
   int  idade ;
 
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade >30)
   printf("Sua categoria e Senior!");
   else { if ((idade <=30)&& (idade >=16))
       printf("Sua categoria e Adulto!");
          else { if ((idade <=15)&&(idade >=11))
           printf("Sua categoria e Adolescente!");
           else { if ((idade <=10)&&(idade >=8))
            printf("Sua categoria e Juvenil!");
            else { if ((idade <=7)&&(idade >=5))
            printf("Sua categoria e Infantil!");
            else 
            printf("Idade sem categoria!");
                  }
                }
               }    
          }                                     
  getch();
  return 0;
}
