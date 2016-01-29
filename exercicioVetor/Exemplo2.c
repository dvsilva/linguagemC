#include<stdio.h>
int main() {
    char vet[15];
    int qtd=0,i;
    
    printf("Vetor\n");
    
    for (i=0;i<=14;i++)
    {
        printf ("Digite um caracter: ");
        scanf(" %c",&vet[i]);
         
    }
        
    
        
      for (i=0;i<=14;i++)
    {
        
        if (vet[i]=='*')
        {
        printf ("\nFoi encontrado um * na Posicao %d ",i);
        qtd++;
        }
       
    }
      
    printf ("\nA quantidade de caracter * encontrados nesse vetor e: %d", qtd);
    
    getch();
    return 0;
    
}
