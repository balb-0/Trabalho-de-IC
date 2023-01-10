#include <stdio.h>

int main()
{
    int numero_pessoas, cont_total_pessoas = 0;
    char resp, atividade;
    float peso, media_peso = 0;
    float porcentagem_bike = 0, cont_bike = 0, cont_danca = 0, cont_natacao = 0, cont_caminhada = 0;

    resp = 's';
    while (resp == 's')
    {

        printf("Entre com o número de pessoas:  ");
        scanf("%d", &numero_pessoas);

        while (cont_total_pessoas < numero_pessoas)
        {
            printf("Qual é o peso da pessoa:  ");
            scanf("%f", &peso);

            printf("Qual é o tipo de esporte:  ");
            scanf(" %c", &atividade);

            if (atividade == 'c')
            {
                cont_caminhada++;
            }
            else if (atividade == 'n')
            {
                cont_natacao++;
            }

            else if (atividade == 'd')
            {
                cont_danca++;
                media_peso = peso + media_peso;
            }
            else if (atividade == 'b')
            {
                cont_bike++;
            }

            cont_total_pessoas++;
        }
        printf("\nDeseja continuar ? (digite s para sim  e n para sair): ");
        scanf(" %c", &resp);
        printf("\n \n");
        if (resp == 's')
        {
            cont_total_pessoas = 0;
        }
    }
    cont_total_pessoas = cont_danca + cont_bike + cont_caminhada + cont_natacao;
    media_peso = (media_peso / cont_danca);
    porcentagem_bike = (cont_bike / cont_total_pessoas) * 100;

    printf("A quantidade de pessoas que caminham: %.1f\n", cont_caminhada);
    printf("A quantidade de pessoas que nadam: %.1f\n", cont_natacao);
    printf("A média dos pesos das pessoas que dançam: %.2f\n", media_peso);
    printf("A porcentagem de pessoas que andam de bicicleta dentre todas as pessoas analisadas: %f\n", porcentagem_bike);
}