#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    

    int i = 0;
    int linha = 5;
    int numero[linha];
    int quantidadePares = 0, quantidadeImpares = 0;
    int totalPares = 0, totalImpares = 0;
    int quantidadeNegativos = 0;
    int totalNegativos = 0;
    int maior = 0, menor = 99999;
    int total = 0, quantidadeTotal = 0;
    float mediaPar, mediaTotal;

    printf("Solicitando os 5 números inteiros abaixo\n");
    for ( i = 0; i < linha; i++)
    {
        printf("Digite o %iº número: ",i+1);
        scanf("%d",&numero[i]);

        numero[i] % 2 == 0 ? quantidadePares++ : quantidadeImpares++;
        if (numero[i] % 2 == 0)
        {
            totalPares += numero[i];
        } else {
            totalImpares += numero[i];
        }

        if (numero[i] < 0)
        {
            quantidadeNegativos++;
            totalNegativos += numero[i];
        }

        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;

        
        total += numero[i];
        quantidadeTotal ++;
    }
    
    if (quantidadePares != 0) {
        mediaPar = totalPares / quantidadePares;
    }

    mediaTotal = total / quantidadeTotal;
    system("cls || clear");

    
    printf("Quantidade de números Ímpares: %i\n",quantidadeImpares);
    printf("\n");
    printf("Quantidade de números Negativos: %i\n",quantidadeNegativos);
    printf("\n");
    printf("Maior número: %i\n",maior);
    printf("Menor número: %i\n",menor);
    printf("\n");
    printf("Média de números pares: %.2f\n",mediaPar);
    printf("Média Total: %.2f\n",mediaTotal);

    return 0;
}