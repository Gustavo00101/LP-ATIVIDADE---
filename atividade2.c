#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {
    setlocale(LC_ALL,"portuguese");

    int linha = 5;
    int coluna = 3;
    char nome [linha] [250], resultado [linha] [250];
    float notas [linha] [coluna], media [linha], soma;
    int idade [linha];
    int i,j;

    for ( i = 0; i < linha; i++)
    {
        printf("Digite o %iº nome: ", i + 1);
        gets(nome[i]);

        printf("Digite sua idade: ");
        scanf("%i",&idade[i]);

        for (j = 0; j < coluna; j++)
        {
            printf("Digite a %iª nota: ", j + 1);
            scanf("%f",&notas[i][j]);
            soma += notas[i][j];
        }
     
        printf("-------------------\n");
        media[i] = soma / coluna;
        soma = 0;
        fflush(stdin);

        if (media[i] >= 7)
        {
            strcpy(resultado[i], "Aprovado");
        } else if (media[i] < 7 && media[i] >= 5)
        {
            strcpy(resultado[i], "Recuperação");
        } else {
            strcpy(resultado[i], "Reprovado");
        }
    }

    system("cls || clear");

    for ( i = 0; i < linha; i++)
    {
        printf("%iº Aluno: %s \n", i + 1, nome[i]);
        printf("Idade: %i \n", idade[i]);
        for ( j = 0; j < coluna; j++)
        {
            printf("%iª nota: %.1f \n", j + 1,notas[i][j]);
        }
        printf("Média: %.1f \n", media[i]);
        printf("Resultado: %s \n\n", resultado[i]);
    }

    return 0;
}
    
