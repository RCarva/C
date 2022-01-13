#include<stdio.h>
#include<stdlib.h>
void troca (float *a, float *b)
{   
  float aux;    
  aux = *a;
  *a = *b;
  *b = aux;
}

int main() 
{
  float var_1,var_2;
  
  printf("Insira um valor para a variavel 1: ");
  scanf("%f", &var_1);
  printf("Insira um valor para a variavel 2: ");
  scanf("%f", &var_2);
    
  troca(&var_1,&var_2);
    
  printf("A variavel 1 e igual a: %.2f \n\nA variavel 2 e igual a: %.2f", var_1, var_2);
    
  return 0;
}