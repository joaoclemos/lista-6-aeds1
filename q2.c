#include <stdio.h>

int main() {
    int temp[31];
    int maiortemp, menortemp;
    float tempmedia = 0;
    int diasabaixo = 0;

    scanf("%d", &temp[0]);
    maiortemp = menortemp = temp[0];
    tempmedia = temp[0];

    for (int i = 1; i < 31; i++) {
        scanf("%d", &temp[i]);
        if (temp[i] > maiortemp) maiortemp = temp[i];
        if (temp[i] < menortemp) menortemp = temp[i];
        tempmedia += temp[i];
    }

    tempmedia /= 31;

    for (int j = 0; j < 31; j++) {
        if (temp[j] < tempmedia) diasabaixo++;
    }

    printf("Menor e maior temperatura: %d e %d\n", menortemp, maiortemp);
    printf("Media de temperatura: %.2f\n", tempmedia);
    printf("Numero de dias nos quais a temperatura foi inferior a temperatura media: %d", diasabaixo);

    return 0;
}