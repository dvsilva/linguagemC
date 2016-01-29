#include <stdio.h>
int main (){
 int  resp=1,senha;
 float p1,p2,avs,media,mediafinal;
 char usu;
 
   printf("Digite o nome do usuario: ");
   scanf("%c", &usu);
   printf("Digite a senha:");
   scanf("%d", &senha);
   
   if ((usu=='b')&&(senha==123))
   {
       while (resp==1)
       {
       printf("\nDigite a primeira nota: ");
       scanf("%f", &p1);
       printf("\nDigite a segunda nota: ");
       scanf("%f", &p2);
       media =((p1+p2)/2);
       
       if (media>=7)
        printf("\nAprovado!");
        else
        { 
        printf("\nAvaliacao Suplementar!");
        printf("\nDigite a nota da AVS :");
        scanf("%f",&avs);
        mediafinal= (((p1*1)+(p2*1)+(avs*2))/4);
        
          if (mediafinal>=6)
          printf("\nAprovado!");
             else  
             printf("\nReprovado!"); 
             }     
          printf("\n\nDesejas continuar a calcular a media de um aluno? ");
          printf("\nDigite 1 para sim e qualquer outro numero para nao:");
          scanf ("%d",&resp);
          }
       printf ("\nObrigado!");
   }
   else { if ((usu!='b')&&(senha!=123)) 
    printf("Senha e Usuario Invalidos!");
      else { if (usu!='b')
            printf("Usuario Invalido!");
            else 
            printf("Senha Invalida!");
           }  
         }


  getch();
  return 0;
  
}
