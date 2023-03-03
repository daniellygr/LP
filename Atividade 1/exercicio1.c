#include <stdio.h>

int main(void){
    int VetA[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &VetA[i]);
    }
    for(i=9; i>=0; i--)
    {
        printf("%d ", VetA[i]);
    }

    return 0;
}
    
