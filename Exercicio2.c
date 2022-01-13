#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b, resultado;
    char sinal;

    printf("Insira um valor: ");
    scanf("%f", &a);

    printf("Insira um valor: ");
    scanf("%f", &b);

    printf("Insira uma operacao: ");
    scanf(" %c", &sinal);

    switch(sinal)
    {
        case '+':
            printf("Resultado = %f", a + b);
            break;
        case '-':
            printf("Resultado = %f", a - b);
            break;
        case '*':
            printf("Resultado = %f", a * b);
            break;
        case '/':
            resultado = a / b;
            printf("Resultado = %f", a / b);
            break;
        default :
            printf("Operacao Invalida.");
            break;
    }

    return 0;
}