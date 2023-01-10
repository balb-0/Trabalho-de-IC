#include <stdio.h>

int main()
{
    int n, i, total = 0, soma = 0;
    printf("Digite o valor n do somatório:");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        soma = i * (i + 1);
        total = total + soma;
    }
    printf("O resultado da soma é: %i",total);
}