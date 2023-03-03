#include <stdio.h>
#include <math.h>

int main (void) {

    int i;
    int j;
    int numeroRecebido;

    do {
        //printf ("Digite um numero entre 1 e 15 ou 0 para sair: ");
        scanf ("%i", &numeroRecebido);

        int matriz[numeroRecebido][numeroRecebido];

        for (i = 0; i < numeroRecebido; i++) {
            for (j = 0; j < numeroRecebido; j++)
            {
                matriz[i][j] = pow (2, (i + j));
            }
            
        }

    for (i = 0; i < numeroRecebido; i++) {
        for (j = 0; j < numeroRecebido; j++) {

            if (matriz[i][j] < 10000) {
                printf(" ");
            }
            if (matriz[i][j] < 1000) {
                printf(" ");
            }
            if (matriz[i][j] < 100) {
                printf(" ");
            }
            if (matriz[i][j] < 10) {
                printf(" ");
            }
            printf("%i", matriz[i][j]);
        } 
        
        printf("\n");
    } 

    }
    
    while (numeroRecebido != 0);
    
    return (0);
    
}