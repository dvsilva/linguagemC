#    include <stdio.h>
int main (){
int idade, voto, opcao;

printf("Digite a sua idade: ");
scanf("%d",&idade);

if (idade<=16)
   printf("Voce nao pode votar!");


if ((idade>65)||((idade>16) && (idade <18)))
{
    printf ("Voce deseja votar?");
    printf ("\nDigite 1 para sim e 2 para nao: ");
    scanf("%d",&opcao);
}    

if ((opcao==1)||((idade>=18)&&(idade <=65)))
         {
        printf ("\n\nLista dos candidatos");
        printf ("\n1- Tiririca");
        printf ("\n2- Eneias");
        printf ("\n3- Clodovil");
        printf ("\n\nVote em uma das opcoes: ");
        scanf ("%d", &voto);
        switch (voto)
          {
              case 1:
                          printf("\nVotou em tiririca");
                          break;
              case 2:
                           printf("\nVotou em eneas");
                            break;
              case 3:
                           printf("\nVotou em clodovil");
                           break;
 
              default :
                            printf ("\nCandidato inesistente!");
                            break;     
          } 
          }
         else
         printf("\nObrigado por comparecer!");
         
   getch();
   return 0;
}
