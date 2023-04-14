#include <stdio.h>

int main(void){
    int vetA[10], vetB[10];
    int i, j;

    printf("Digite 10 valores para A: ");
    
    for(i = 0; i < 10; i++)
    {
        scanf("%i", &vetA[i]);
    }

    j = 9;

    for (i = 0; i < 10; i++)
    {
        vetB[j-i] = vetA[i];
    }

    printf("Numeros ao contrario: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetB[i]);
    }
    
return 0;

}