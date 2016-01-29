#include <stdio.h>
        
int main (){
   int  i,idade, cont=0, contidade=0,idades=0, qtd=0, qtd2=0;
   float peso, altura, porcentagem;
   char corcabelos,corolhos;

   
   printf("Calculando!");
   
    for (i=1;i<=20;i++)
    { 
    printf("\n\nDigite sua idade: ");
    scanf("%d",&idade);
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("Digite a cor dos seus olhos: A- Azul, P- Preto, V- Verde, C- Castanho: ");
    scanf(" %c",&corolhos);
    
    if ((corolhos ='A')||(corolhos ='a')||(corolhos ='P')||(corolhos ='p')||(corolhos ='V')||(corolhos ='v')||(corolhos ='C')||(corolhos ='c'))
    {
        printf("Digite a cor dos seus cabelos: P- Preto, C- Castanho, R- Ruivo, L- Loiro: ");
        scanf(" %c",&corcabelos);
        
        if ((corcabelos ='P')||(corcabelos ='p')||(corcabelos ='C')||(corcabelos ='c')||(corcabelos ='R')||(corcabelos ='r')||(corcabelos ='L')||(corcabelos ='l'))
        {
            if ((peso<60)&&(idade>50))
             cont= cont+1;
            
            if (altura<1.50){
              contidade= contidade + 1;
              idades= idades + idade;}
              
            if ((corolhos = 'A')|| (corolhos = 'a'))
              qtd= qtd + 1;
              
            if (((corcabelos = 'r') || (corcabelos = 'R')) && ((corolhos =! 'A') || (corolhos =! 'a')))
             qtd2 = qtd2 +1 ;
             
          }
        
           else { printf ("Cor de cabelos invalida!");
           printf ("Digite as informações da ultima pessoa novamente!");
            i--;
           }
           
        }
                  
       else  { printf ("Cor de olhos invalida!");
             printf ("Digite as informações da ultima pessoa novamente!");
              i--;
          }
         
    }
    
    printf("\nA quantidade de pessoas com idade superior a 50 e peso inferior a 60 e: %d",cont);
    printf("\nA media das idades das pessoas com menos de 1.50 metros de altura e: %2.f",(idades/contidade));
    porcentagem = ((qtd/20)*100);
    printf("\nA porcentagem das pessoas com olhos azuis dentre as pessoas analisadas e de: %2.f por cento",porcentagem);
    printf("\nA quantidade de pessoas com cabelo ruivo com olhos diferentes de azuis e: %d",qtd2);

  getch();
  return 0;
}
