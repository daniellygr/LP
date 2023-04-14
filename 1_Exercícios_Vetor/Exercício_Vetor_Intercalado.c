#include <stdio.h>

int main(void){
    int vetA[5], vetB[5], vetC[10];
    int i;

    printf("Digite 5 valores inteiros para A: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &vetA[i]);
    }

    printf("Digite 5 valores inteiros para B: ");
    for(i = 0; i <5 ; i++)
    {
        scanf("%d", &vetB[i]);
    }

    for(i = 0; i < 10; i++)
    {
        vetC[i*2] = vetA[i];
        vetC[i*2+1] = vetB[i];
    }
    
    for(i = 0; i < 10; i++)
    {
        printf("%d ", vetC[i]);
    }

return 0;

}