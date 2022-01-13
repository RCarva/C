#include <stdio.h>
#include <string.h>

int palindromo(char *str, int tamanho,int i)
{
	if(tamanho>0)
	{	
		if(str[i] == ' ')i++;
		if(str[tamanho-1] == ' ')tamanho--;

		if(str[i] != str[tamanho-1])
		return 0;
		else
		return palindromo(str,tamanho-1,i+1);
	}
	else
	return 1;
} 

int main(void)
{
	char str[100];
	printf("Digite uma frase: ");
   	scanf("%s",str);

  	if (palindromo(str,strlen(str),0))
		printf("E um palindromo\n");
  	else
		printf("Nao e um palindromo\n");
 
}