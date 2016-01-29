#include <stdio.h>
        
int main (){
   int  i,idade, contidade=0, cont=0, contalt=0, contalti=0;
   float peso, altura,pes;

   
   printf("Calculando idade, pesos e alturas!");
   
    for (i=1;i<=10;i++)
    { 
    printf("\nDigite sua idade: ");
    scanf("%d",&idade);
    contidade= contidade + idade;
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    
    if ((peso>90)&&(altura<1,50))
     cont= cont+1;
    
    if (altura>1.90)
      contalt= contalt+1;
        if ((idade>10)&&(idade<30))
         contalti= contalti +1;
    }
    
    printf("\nA media das idades e: %d",(contidade/10));
    printf("\nA quantidade de pessoas com peso superior a 90 kg e altura inferior a 1.50 e: %d",cont);
    pes= ((contalti/contalt)*100);
    printf("\nDentre as pessoas que medem mais de 1.90 metros temos %2.f pessoas que tem idade  entre 10 e 30 anos ",pes);
    

  getch();
  return 0;
}
