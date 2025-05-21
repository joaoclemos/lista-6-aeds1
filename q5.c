#include <stdio.h>
#include <stdlib.h>
void preencherMatriz(int M[5][5])
{
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
}
int somaLinha4(int M[5][5])
{
    int soma = 0;
    for (int j = 0; j < 5; j++)
    {
        soma += M[3][j];
    }
    return soma;
}
int somaColuna2(int M[5][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += M[i][1];
    }
    return soma;
}
int somaDiagonalPrincipal(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][i];
    }
    return soma;
}

int somaDiagonalSecundaria(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][4 - i];
    }
    return soma;
}
int somaTodosElementos(int M[5][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += M[i][j];
        }
    }
    return soma;
}
int main()
{
    int M[5][5];
    preencherMatriz(M);
    printf("\nMatriz 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n%d\n", somaLinha4(M));
    printf("%d\n", somaColuna2(M));
    printf("%d\n", somaDiagonalPrincipal(M));
    printf("%d\n", somaDiagonalSecundaria(M));
    printf("%d\n", somaTodosElementos(M));


    return 0;
}
