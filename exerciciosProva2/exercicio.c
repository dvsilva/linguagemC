#include<stdio.h>
int main(){
    char resp='s', usu, q[10], qa[15];
    int i=0,j=0,senha,cont=0,cont2=0, nota[15];//nota é inteiro porque não tem como um aluno tirar notas quebradas
    float perc=0;
    
    printf("Correcao de Provas\n");
    
    printf("\nDigite o usuario: ");  
    scanf(" %c", &usu);
    printf("Digite o senha: ");  
    scanf("%d", &senha);
    printf("\n"); //para ter estética
    
     if ((usu=='j')&&(senha==123))
       {
            while (resp=='s')
            { 
               for (i=1;i<16;i++)
                {
                  nota[i]=0;//zerando o vetor para não conter lixo nele
                }
                    
               for (j=1;j<11;j++)
               {
                   printf("Digite o gabarito para a questao %d : ",j );
                   scanf(" %c", &q[j]);//povoando o vetor com o gabarito
               }
               for (j=1;j<16;j++)
               {
                   for (i=1;i<11;i++)
                  {
                   printf("Digite o gabarito do aluno %d para a questao %d : ",j, i );
                   scanf(" %c", &qa[i]);//povoando o vetor com as questoes do aluno "j"
                   
                       if (q[i]==qa[i])
                        ++nota[j];//incrementando pontos à nota se ela for a mesma do gabarito
                   }
               }
               
               for (i=1;i<16;i++)
               {
                 printf("\nO aluno %d tirou %d na prova",i, nota[i]);//imprimindo as notas
                }
                
               for (i=1;i<16;i++)
               {
                 if (nota[i]>=7)
                 {
                  printf("\nO aluno %d esta Aprovado!",i);
                  cont = cont + 1;//contando a quantidade de alunos aprovados para fazer o percentual dos mesmos
                  }
                   else
                  {
                    printf("\nO aluno %d esta Reprovado!",i);
                    cont2 = cont2 + 1;//contando a quantidade de alunos reprovados
                    }
               }  
                  perc = ((cont*100)/15);//percentual de alunos aprovados
                  printf("\nO percentual de aprovacao desta turma e de %2.f por cento",perc);
                  printf("\nA quantidade de alunos que nao obtiveram media 7.0: %d",cont2);
                  
                                             
                        
                printf("\n\nVoce deseja continuar a correcao das provas?");
                printf("\nDigite 's' para sim e 'n' para nao: ");
                scanf(" %c", &resp);
            }
        }
        
        else { if ((usu!='j')&&(senha!=123))
               printf("\nUsuario e Senha invalidos!");
               else { if (usu!='j')
                       printf("\nUsuario invalido!");
                       else 
                       printf("\nSenha invalida!");
                       }
                       }
                       
    getch();
    return 0;
    
}
