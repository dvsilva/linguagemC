#include <stdio.h>

int main(){
    int numalunos,x;
    float p1,p2,p3,media,cont=0,mediadaturma=0;
    
    printf ("Digite o numero de alunos: ");
    scanf(" %d", &numalunos);
    
    for (x=1;x<=numalunos;x++)
    {
        printf("\nDigite as notas do aluno %d", x, ":");
        printf("\nDigite a nota da prova 1 :");
        scanf("%f", &p1);    
        printf("Digite a nota da prova 2 :");
        scanf("%f", &p2); 
        printf("Digite a nota da prova 3 :");
        scanf("%f", &p3); 
        media= ((p1*0.3) + (p2*0.2) + (p3*0.5));
        cont= (cont + media);
     }

    mediadaturma= (cont/numalunos);
    printf ("\nA media da turma e: %2.f", mediadaturma);
    
    getch();
    return 0;
}
