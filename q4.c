#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    int *vetor;
    int maior;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro na alocação de memória!\n");
        return 1;
    }
    printf("Digite os %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("\nO maior elemento do vetor é: %d\n", maior);
    free(vetor);
    return 0;
}
