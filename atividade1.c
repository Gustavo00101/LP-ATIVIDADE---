#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int idade[5];
    char nome[100][5];
    float peso [5];
    float altura [5];
    float maioraltura = 0;
    float menoraltura = 999;
    int menoridade = 999;
    int maioridade = 0;
    float maiorpeso = 0;
    float menorpeso = 999;

    for (i = 0; i < 5; i++)
    {
        printf("\ndigite o seu nome:\n");
        scanf("%s", &nome[i]);

        printf("digite sua idade:");
        scanf("%d", &idade[i]);

        printf ("digite seu peso:");
        scanf ("%f",&peso[i]);

        printf("digite sua altura:");
        scanf ("%f",&altura[i]);

     maioridade = idade[i] > maioridade ? idade[i] : maioridade;
     menoridade = idade[i] < menoridade ? idade[i] : menoridade;
     
     maioraltura = altura[i] > maioraltura ? altura[i] : maioraltura;
     menoraltura = altura[i] < menoraltura ? altura[i] : menoraltura;
     
     maiorpeso = peso[i] > maiorpeso ? peso[i] : maiorpeso;
     menorpeso = peso[i] < menorpeso ? peso[i] : menorpeso;

    }

        printf ("\nmaior idade: %d\n", maioridade);
        printf ("\nmenor idade: %d\n", menoridade);
        printf ("\nmaior altura:%.2f\n",maioraltura);
        printf ("\nmenor altura:%.2f\n",menoraltura);
        printf ("\nmaior peso: %.2f\n",maiorpeso);
        printf ("\nmenor peso: %.2f\n",menorpeso);




    return 0;
}