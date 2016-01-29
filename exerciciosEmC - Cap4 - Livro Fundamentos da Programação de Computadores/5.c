#include <stdio.h>
        
int main (){
   int escolha;
   float n1=0, n2=0;
   
   printf("Menu:");
   printf("\n\n1- media dos dois numeros");
   printf("\n2- subtracao do maior pelo menor");
   printf("\n3- multiplicacao");
   printf("\n4- divisao dos do primeiro pelo segundo");
   
  printf("\n\nDigite a opcao do menu desejada: ");
  scanf("%d", &escolha); 
  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);
 
            
  switch (escolha) {
   case 1:
    printf("\n\nA media dos dois numeros e:%2.f",((n1+n2)/2));
    break;
   case 2:
     if (n1>n2)
      printf ("\n\nA subtracao do maior numero pelo menor e:%2.f",n1-n2);
      else 
        printf ("\n\nA subtracao do maior numero pelo menor e:%2.f",n2-n1);
        break;
   case 3:
     printf ("A multiplicacao dos numeros e: %2.f",(n1*n2));
     break;
   case 4:
     if (n2!=0)
        printf("A divisao do primeito numero pelo segundo e: %2.f",(n1/n2));
       else 
         printf ("Impossivel porque o segundo numero e igual a 0!");
    break;
     default: 
           printf ("Opcao Invalida!");
           break;
    }
            
  getch ();
  return 0;
}
