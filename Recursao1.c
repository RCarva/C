#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    int i,d=0,m=0;
    float n_filho=0, media_sal=0, p, maior;
    struct dados
    {
        int n_filho;
        float salario;
    };

    struct dados vetor[3];

    for(i=0;i<3;i++)
    {
        printf("Digite a quantidade de filhos da pessoa %d :", i+1);
        scanf("%d", &vetor[i].n_filho);
        printf("Digite o salario da pessoa %d: R$", i+1);
        scanf("%f", &vetor[i].salario);

        if (i==0 || vetor[i].salario>maior)
        {
            maior=vetor[i].salario;
        }
        media_sal=media_sal+vetor[i].salario;
        n_filho=n_filho+vetor[i].n_filho;
        
    }
    media_sal=media_sal/3;
    n_filho=n_filho/3;

    printf("A media do numero de filhos e: %.2f", n_filho);
    printf("\nA media salarial da populacao e: %.2f", media_sal);
    printf("\nO maior salario e: %.2f", maior);

    return 0;
}