#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    

    
    int linha = 999;
    char produto[linha][250];
    int quantidade[linha];
    float preco[linha];
    float vendaTotal; 
    int botao;
    int i, j;

    do
    {
        printf("Deseja realizar registro de venda?\n");
        printf("1 - Registrar\n");
        printf("2 - Vizualizar e Finalizar\n");
        printf("Resposta: ");
        scanf("%i", &botao);
        system("cls || clear");
        fflush(stdin);

        switch (botao)
        {
        case 1:
            printf("Produto comprado: ");
            gets(produto[j]);

            printf("Quantidade  comprada: ");
            scanf("%i",&quantidade[j]);

            printf("Preço Total da venda: ");
            scanf("%f",&preco[j]);

            vendaTotal += preco[j];

            system("cls || clear");
            j++;

            break;
        case 2:
            for (i = 0; i < j; i++)
            {
                printf("Produto: %s \n", produto[i]);
                printf("Quantidade: %i \n", quantidade[i]);
                printf("Valor Total: %.1f \n", preco[i]);
                printf("-------------------\n");
            }
                printf("Total de Venda: %i \n", j);
                printf("Lucro: %.1f \n", vendaTotal);
            break;
        default:
            break;
        }

    } while (botao == 1);

    return 0;
}