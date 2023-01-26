#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Matricula[100];
    float Nota[100], maiorNota = 0;
    int maiorMatricula;

    for (int i = 0; i < 100; i++)
    {
        printf("Matricula %d: ", i + 1);
        scanf("%d", &Matricula[i]);

        printf("Nota %d: ", i + 1);
        scanf("%f", &Nota[i]);
        if (0 > Nota[i] < 10)
        {
            printf("Nota Incorreta! Digite Novamente: ");
            scanf("%f", &Nota[i]);
        }

        if (Nota[i] > maiorNota)
        {
            maiorNota = Nota[i];
            maiorMatricula = Matricula[i];
        }
    }

    printf("\nMaior nota: %.1f\nMatricula(s): ", maiorNota);

    for (int i = 0; i < 100; i++)
    {
        if (Nota[i] == maiorNota)
        {
            printf("%d ", Matricula[i]);
        }
    }
}