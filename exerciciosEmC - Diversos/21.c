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
            printf("Procedência Sul");
            break;
       case 2:
             printf("Procedência Norte");
            break;
       case 3:
             printf("Procedência Leste");
            break;
       case 4:
             printf("Procedência Oeste");
            break;  
            
}
            
             
       if ((codigo==5)||(codigo==6))
             printf("Procedência Nordeste");
            
       if ((codigo==7)||(codigo==8)||(codigo==9))
             printf("Procedência Sudeste");
            
       if ((codigo>=10)&&(codigo<=20))
             printf("Procedência Centro-Oeste");
            
       if ((codigo>=21)&&(codigo<=30))
             printf("Procedência Nordeste");
            
       
printf ("Impossivel detectar a procedencia!");
    

       
       getch();
       return 0;
}
