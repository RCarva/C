#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    int TAM=0, vetorA[TAM], vetorB[TAM], vetorC[TAM];
    int i, soma1, soma2;
    printf("Digite o tamanho do vetor:");
    scanf(" %d", &TAM);

    for(i=0; i < TAM; i++)
    {
        printf("Digite os elementos do vetor A: \n");
        scanf(" %d", &vetorA[i]);
    }
    for(i=0; i< TAM; i++)
    {
        printf("Digite os elementos do vetor B: \n");
        scanf(" %d", &vetorB[i]);
    }
    for(i=0; i< TAM;i++)
    {
        soma1 = soma1 + vetorA[i];
        soma2 = soma2 + vetorB[i];
    }
    printf("Soma dos elementos do vetor A: %d", soma1);
    printf("\nSoma dos elementos do vetor B: %d", soma2);
    return 0;
}
