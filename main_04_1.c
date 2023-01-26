#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int Matriz[4][4], i, j;
    printf("Digite os 16 valores da matriz:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &Matriz[i][j]);
    printf("\nElementos da diagonal secundária: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i + j == 4 - 1)
            {
                printf("%d ", Matriz[i][j]);
            }
        }
    }
}