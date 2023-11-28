#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


    int linha = 999;
    char nome[linha][250], telefone[linha][11];
    int botao;
    int i, j;


    do
    {
        printf("Deseja adicionar um Telefone fixo a sua Agenda Virtual?\n");
        printf("1 - Adicionar\n");
        printf("2 - Ver Agenda e Finalizar\n");
        printf("Digite 1 ou 2 para escolher: ");
        scanf("%i", &botao);
        system("cls || clear");
        fflush(stdin);

        switch (botao)
        {
        case 1:
            printf("Cadastre o seu contato: ");
            gets(nome[j]);

            printf("Digite o Telefone: ");
            gets(telefone[j]);
            system("cls || clear");
            j++;
            break;
        case 2:
            for (i = 1; i < j; i++)
            {
                printf("Nome: %s \n", nome[i]);
                printf("Telefone: %s \n\n", telefone[i]);
            }
            break;
        default:
            break;
        }

    } while (botao == 1);

    return 0;
}