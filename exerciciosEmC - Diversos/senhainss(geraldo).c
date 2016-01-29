#include<stdio.h>
int main (){
    int i=0,us=0,senha=0,op=0;
    float sal=0,des=0;
    
    for (i=0;i<3;i++){
        
    printf("\n Digite o Id do usuario:");
    scanf("%d",&us);
    if (us!=1){
       printf("\n Usuario invalido.");
       }else{
            printf("\n Digite a senha:");
            scanf("%d",&senha);
            if (senha!=171){
            printf("\n Senha invalida.");
            }else{
                 printf("\n\n Programa para calculo do INSS:");
                 printf("\n\n Digite o salario:");
                 scanf("%f",&sal);
                 
                 printf("\n\n Escolha uma opcao:");
                 printf("\n\n Opcao 1:");
                 printf("\n\n Opcao 2:");
                 printf("\n\n Opcao 3:");
                 printf("\n\n Opcao 4:");
                 printf("\n\n Opcao 5:");
                 scanf("%d",&op);
                 
                 if ((op>0)&&(op<=5)){
                 switch (op){
                 case 1:
                      if (sal<=868){
                         des=((sal/100)*7,65);
                         sal=(sal-des);
                         printf("\n Odesconto e:%.2f",des);
                         printf("\n O salario atual e:%.2f\n",sal);
                         break;
                         }else{
                              case 2:
                                    if ((sal>868)&&(sal<=1140)){
                                    des=((sal/100)*8,65);
                                    sal=(sal-des);
                                    printf("\n Odesconto e:%.2f",des);
                                    printf("\n O salario atual e:%.2f\n",sal);
                                    break;
                                    }else{
                                         case 3:
                                              if ((sal>1140)&&(sal<=1447)){
                                              des=((sal/100)*9);
                                              sal=(sal-des);
                                              printf("\n Odesconto e:%.2f",des);
                                              printf("\n O salario atual e:%.2f\n",sal);
                                              break;
                                              }else{
                                                   case 4:
                                                        if ((sal>1447)&&(sal<=2894)){
                                                        des=((sal/100)*11);
                                                        sal=(sal-des);
                                                        printf("\n Odesconto e:%.2f",des);
                                                        printf("\n O salario atual e:%.2f\n",sal);
                                                        break;
                                                        }else{
                                                             case 5:
                                                                  if (sal>2894){
                                                                  des=((sal/100)*15);
                                                                  sal=(sal-des);
                                                                  printf("\n Odesconto e:%.2f",des);
                                                                  printf("\n O salario atual e:%.2f\n",sal);
                                                                  break;
                                                                  }else{
                                                                      printf("\n salario invalido para opcao desejada!!");}
                                                             }
                                                   }
                                         }                                   
                              }
                 }
                 }
                 else{
                 printf("\n Opcao invalida.");
                 }
                 }
            }
            }    
    getch ();
    return 0;
    }
