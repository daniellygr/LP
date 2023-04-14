#include <stdio.h>

int main(void){
    int vetor1[20], vetor2[20], vetorResultado[20];
    int i;

    printf("Digite 10 numeros inteiros para A: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 10 numeros inteiros para B: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    printf("Soma de A e B: ");
    for(i = 0; i < 10; i++)
    {
        vetorResultado[i] = (vetor1[i] + vetor2[i]);
        printf("%d ", vetorResultado[i]);
    }
       
return 0;
}