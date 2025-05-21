#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp[32];
    int maiortemp = 15;
    int menortemp = 45;
    float tempmedia = 0;
    int diasabaixo = 0;

    for (int i=0; i<32; i++)
    {
        scanf("%d", temp[i]);
        if (temp[i]>= maiortemp)
        {
            maiortemp=temp[i];
        }
        if (temp[i]<= menortemp)
        {
            menortemp=temp[i];
        }
        tempmedia += temp[i];
    }
    tempmedia= tempmedia/31;
    for(int j=0; j<32; j++){
        if(nota[j]< tempmedia){
            diasabaixo++;
        }
    }
printf("Menor e maior temperatura: %d e %d\n", menortemp maiortemp);
printf("Media da temperatura: %f\n", tempmedia);
printf("Numero de dias nos quais a temperatura foi inferior a temperatura media: %d", diasabaixo);



    return 0;
}
