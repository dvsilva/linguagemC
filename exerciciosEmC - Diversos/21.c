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
            printf("ProcedÍncia Sul");
            break;
       case 2:
             printf("ProcedÍncia Norte");
            break;
       case 3:
             printf("ProcedÍncia Leste");
            break;
       case 4:
             printf("ProcedÍncia Oeste");
            break;  
            
}
            
             
       if ((codigo==5)||(codigo==6))
             printf("ProcedÍncia Nordeste");
            
       if ((codigo==7)||(codigo==8)||(codigo==9))
             printf("ProcedÍncia Sudeste");
            
       if ((codigo>=10)&&(codigo<=20))
             printf("ProcedÍncia Centro-Oeste");
            
       if ((codigo>=21)&&(codigo<=30))
             printf("ProcedÍncia Nordeste");
            
       
printf ("Impossivel detectar a procedencia!");
    

       
       getch();
       return 0;
}
