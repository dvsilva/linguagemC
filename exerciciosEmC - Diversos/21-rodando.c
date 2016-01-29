#    include <stdio.h>
int main (){
float preco;
int cod;

printf("Digite o preco do produto: ");
scanf("%f",&preco);
printf ("Digite o codigo de origem: ");
scanf("%d",&cod);

switch (cod)
{
   case 1:
        printf("Procedencia Sul");
        break;
   case 2:
         printf("Procedencia Norte");
        break;
   case 3:
         printf("Procedencia Leste");
        break;
   case 4:
         printf("Procedencia Oeste");
        break;    
   case 5:
         printf("Procedencia Nordeste");
         break;
   case 6:
         printf("Procedencia Nordeste");
        break;
   case 7:
         printf("Procedencia Sudeste");
        break;
   case 8:
         printf("Procedencia Sudeste");
        break;
   case 9:
         printf("Procedencia Sudeste");
        break;
   case 10:
         printf("Procedencia Centro-Oeste");
        break;
   case 11:
         printf("Procedencia Centro-Oeste");
        break;
   case 12:
         printf("Procedencia Centro-Oeste");
        break;
   case 13:
         printf("Procedencia Centro-Oeste");
        break;
   case 14:
         printf("Procedencia Centro-Oeste");
         break;
   case 15:
         printf("Procedencia Centro-Oeste");
        break;
   case 16:
         printf("Procedencia Centro-Oeste");
        break;
   case 17:
         printf("Procedencia Centro-Oeste");
        break;
   case 18:
         printf("Procedencia Centro-Oeste");
        break;
   case 19:
         printf("Procedencia Centro-Oeste");
        break;
   case 20:
         printf("Procedencia Centro-Oeste");
        break;
   case 21:
         printf("Procedencia Nordeste");
        break;
   case 22:
         printf("Procedencia Nordeste");
        break;
   case 23:
         printf("Procedencia Nordeste");
        break;
   case 24:
         printf("Procedencia Nordeste");
        break;
   case 25:
         printf("Procedencia Nordeste");
        break;
   case 26:
         printf("Procedencia Nordeste");
        break;
   case 27:
         printf("Procedencia Nordeste");
        break;
   case 28:
         printf("Procedencia Nordeste");
        break;
   case 29:
         printf("Procedencia Nordeste");
        break;
   case 30:
         printf("Procedencia Nordeste");
        break;
   default :
           printf ("Impossivel detectar a procedencia!");
           break;     
}
   
   getch();
   return 0;
}
