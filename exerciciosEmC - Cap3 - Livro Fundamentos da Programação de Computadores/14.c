#include <stdio.h>
#include <conio.h>

int main (){ 
    int anoa,anon,idadea,idadem,idaded,idades;
    
    
    printf ("Digite o ano atual:");
    scanf ("%d", &anoa);
    printf ("Digite o ano do seu nascimento:");
    scanf ("%d", &anon);
    
   idadea = anoa-anon;
   idadem = idadea*12;
   idaded = idadem *30;
   idades = idaded/4;
   
    
    printf ("A sua idade em anos e: %d \n", idadea);
    printf ("A sua idade em meses e: %d\n", idadem);
    printf ("A sua idade em dias e: %d\n", idaded);
    printf ("A sua idade em semanas e: %d\n", idades);
    getch();
    
    return 0;
}

