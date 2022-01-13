#include <stdio.h>
#define TAM 7

int main(void)
{
    int vetor[TAM] = {9, 6, 13, 3, 14, 22, 7}, i, soma;
    float media;

    soma = media = 0;

    for (i = 0; i < TAM; i++)
    {
        soma = soma + vetor[i];
    }

    media = (float)soma / i;
    printf("A media dos valores do vetor e: %.2f", media);

    return 0;
}