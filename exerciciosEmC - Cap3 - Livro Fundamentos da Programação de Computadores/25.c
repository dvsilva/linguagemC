#include<stdio.h>
int main(){
    int hr,min,horasemminutos,totaldeminutos,totalconvertidoemsegundo;
    printf("Digite a quantidade de horas: ");
    scanf("%d",&hr);
    printf("Digite a quantidade de minutos: ");
    scanf("%d",&min);
    horasemminutos=(hr*60);
    totaldeminutos= (horasemminutos+min);
    totalconvertidoemsegundo=(totaldeminutos*60);
    printf("\nO total de horas convertidas em minutos e: %d",horasemminutos);
    printf("\nO total de minutos e: %d",totaldeminutos);
    printf("\nO total de horas convertidas em minutos e: %d",totalconvertidoemsegundo);
    
getch();
return 0;
}

