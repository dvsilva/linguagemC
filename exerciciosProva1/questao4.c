#include<stdio.h>

main()
{
char usu, login='b';
int opc, senha, password=123;
printf("Informe o usuario: ");
scanf("%c",&usu);
printf("Informe a senha: ");
scanf("%d",&senha);
if ((usu==login) && (senha==password))
{
    printf("\nEscolha uma das opcoes abaixo:\n");
    printf("\n1- Megasena\n");
    printf("\n2- Dupla-Sena\n");
    printf("\n3- Pagamentos\n");
    printf("\n4- CEF\n");
    printf("\n-> ");
    scanf("%d", &opc);
    switch (opc)
         {
    case 1:
         printf("\nDigite os dados relativos a Megasena");
         break;
    case 2:
         printf("\nDigite os dados relativos a Dupla-Sena");
         break;
    case 3:
         printf("\nDigite os dados relativos aos Pagamentos");
         break;
    case 4:
         printf("\nDigite os dados relativos a Megasena");
         break;
    default:
         printf("\nOpcao invalida");
         break;
         }    
}
else if ((usu!=login) && (senha!=password))
     printf("Tanto o usuario quanto a senha estao errados!");
     else if (usu!=login)
     printf ("Apenas o usuario esta errado");
     else
     printf("Apenas a senha esta errada!");
     
getch();
      
}
      
