# include <stdio.h>
int main (){
float preco;
int codigo;

printf("Digite o preco do produto: ");
scanf("%f",&preco);
printf ("Digite o codigo de origem: ");
scanf("%f",&codigo);

switch (codigo)
{
       case 1:
            printf("Proced�ncia Sul");
            break;
       case 2:
             printf("Proced�ncia Norte");
            break;
       case 3:
             printf("Proced�ncia Leste");
            break;
       case 4:
             printf("Proced�ncia Oeste");
            break;  
            
}
            
             
       if ((codigo==5)||(codigo==6))
             printf("Proced�ncia Nordeste");
            
       if ((codigo==7)||(codigo==8)||(codigo==9))
             printf("Proced�ncia Sudeste");
            
       if ((codigo>=10)&&(codigo<=20))
             printf("Proced�ncia Centro-Oeste");
            
       if ((codigo>=21)&&(codigo<=30))
             printf("Proced�ncia Nordeste");
            
       
printf ("Impossivel detectar a procedencia!");
    

       
       getch();
       return 0;
}
