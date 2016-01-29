#include <stdio.h>
        
int main (){
   int  senha ;
   
  printf("Digite a senha: ");
  scanf("%d", &senha);
  
  if (senha==4531)
  printf("Acesso permitido!");
  else
  printf("Acesso negado!");
  
                                      
  getch();
  return 0;
}
