/* tributação INSS sobre salário */
/*Enviado por: Felipe S. Vieira*/
#include <stdio.h>

main()
{
char usuario, opcao='z';
int senha, num=0;
float salario, tributacao;

printf("\n Program para calculo do INSS");

for (num=0; num<3; num++)
    {
    printf("\n Valide usuario e senha.");
    printf("\n usuario ");
    scanf("%c", &usuario);
    getchar();
    printf("\n senha ");
    scanf("%d", &senha);
    getchar();
    if ((usuario=='x') && (senha==171))
       {
        num=5;
        
       
        printf("\n Deseja executar o calculo de tributacao? Sim(s) Nao(n) ");
        scanf("%c", &opcao);
        while(opcao=='s')
        {
        printf("\n Digite o salario:R$ ");
        scanf("%f", &salario);
        getchar();
        if (salario<=868.00)
           {
           tributacao= salario * 0.0765;
           printf("\n Tributacao = R$%.2f", tributacao);
           }
        else
            { 
            if ((salario>868.00)&&(salario<=1140.00))
                {
                tributacao= salario * 0.0865;
                printf("\n Tributacao = R$%.2f", tributacao);
                }
            else 
                {
                if ((salario>1140.00)&&(salario<=1447.00))
                     {
                     tributacao= salario * 0.09;
                     printf("\n Tributacao = R$%.2f", tributacao);
                     }
                else 
                     {              
                     if ((salario>1447.00)&&(salario<=2894.00))
                          {
                          tributacao= salario * 0.11;
                          printf("\n Tributacao = R$%.2f", tributacao);
                          }           
                     else
                         {
                              tributacao= salario * 0.15;
                              printf("\n Tributacao = R$%.2f", tributacao);
                         }
                      }
                }
            }
                                     
        printf("\n Deseja executar novamente o calculo de tributacao? Sim(s) Nao(n) ");
        scanf("%c", &opcao);
        getchar();
        }
       }
    else{ 
         if (usuario!='x')
           printf("\n Usuario invalido.");
        else{ 
             if (senha!=171)
                printf("\n Senha invalida.");
             else 
                  printf("\n Usuario e senha invalidos!");
             }
        }        
    }
    printf("\n Pressione a tecla 'ENTER' para encerrar.");
    getch();
}
         
         
   

