#include <stdio.h>
int main (){
 int  resp=1,senha,opcao,i;
 float salario,inss,vr,vt,descontos,salarioliq;
 char usu;
 
 for(i=0; i<3; i++)
 {
          
   printf("Digite o nome do usuario: ");
   scanf(" %c", &usu);
   printf("Digite a senha: ");
   scanf("%d", &senha);
   
   if ((usu=='x')&&(senha==171))
   {
   i=5;
       while (resp==1)
       {
       printf("\nDigite o salario bruto: ");
       scanf("%f",&salario);
       printf("\n\nMenu: ");
       printf("\n1- Salario ate 868 reais");
       printf("\n2- Salario de 868 ate 1140 reais");
       printf("\n3- Salario de 1140 ate 1447 reais");
       printf("\n4- Salario de 1447 ate 2894 reais");
       printf("\n5- Salario acima de 2894 reais");
       printf("\nDigite a opcao a qual se encaixa seu salario: ");
       scanf("%d",&opcao);
       
       
       if ((opcao>=1) && (opcao <=5))
       {
         if (salario<=868){
          inss =((salario*7.65)/100);
          printf ("O calculo do Inss e igual a: %2.f",inss); }      
           else { if ((salario>868)&&(salario<=1140)){
                    inss=((salario*8.65)/100);
                    printf ("O calculo do Inss e igual a: %2.f ",inss);}
                     else { if ((salario>1140)&&(salario<=1447)){
                        inss = ((salario*9)/100);
                        printf ("O calculo do Inss e igual a: %2.f",inss);}
                          else { if ((salario>1447)&&(salario<=2894)){
                            inss = ((salario*11)/100);
                            printf ("O calculo do Inss e igual a: %2.f",inss);}
                                else {
                                inss = ((salario*15)/100);
                                printf ("O calculo do Inss e igual a: %2.f",inss);}
                       
                      
                               }
                          }
                  }
           printf("\n\nPara gerar o Contra-cheque, forneca algumas informacoes: ");
           printf("\n\tDigite o valor do vale transporte: ");
           scanf("%f",&vt);
           printf("\tDigite o valor do vale refeicao: ");
           scanf("%f",&vr);
           
           descontos= (inss+vt+vr);
           salarioliq=(salario-descontos);
           printf("\n\nContra-cheque: ");
           printf("\n\tO valor dos descontos e: %2.f  + %2.f + %2.f = %2.f ",inss,vt,vr,descontos);
           printf("\n\tO salario liquido e: %2.f",salarioliq);
           
          
       }
     else
    printf("Opcao invalida!");    
                    
           
   printf ("\n\nDesejas continuar?");
   printf("\nDigite 1 para sim e qualquer outro numero para nao: ");
   scanf("%d", &resp);      
 
     }
   
   }  

   else { if ((usu!='x')&&(senha!=171)) 
    printf("\nSenha e Usuario Invalidos!\n\n");
      else { if (usu!='x')
            printf("\nUsuario Invalido!\n\n");
            else 
            printf("\nSenha Invalida!\n\n");
            
            
         }
  
    }
  }
  printf("\nObigado!");
  getch();
  return 0;
  
}
