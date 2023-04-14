#include <stdio.h>

int main(void){

    int matriz[5][6];
    int vetor[30];
    int i;
    int j;
    int k = 0;

    //Armanezando os valores que o usuário forneceu para a matriz
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf ("Digite um valor: \n");
            scanf ("%i", &matriz[i][j]);
        }
        
    }
    
    //Passar os valores da matriz para o vetor unidimensional
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            vetor[k] = matriz[i][j];
            k++;
        }
    }

    //Exibir os valores do vetor
    printf ("Vetor: \n");
    
    for (i = 0; i < 30; i++) {
       printf (" %i", vetor[i]);
    }
    
    //Exibir os valores da diagonal principal da matriz
    printf ("\nDiagonal principal: \n");
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            if (i == j) {
                
                if (i == 0) {
                    printf(" %i", matriz[i][j]);
                }
                else if (i == 1) {
                    printf(" %i", matriz[i][j]);
                }
                else if (i == 2) {
                    printf(" %i", matriz[i][j]);
                }
                else if (i == 3) {
                    printf(" %i", matriz[i][j]);
                }
                else if (i == 4) {
                    printf(" %i", matriz[i][j]);
                }
            }
        }
        
    }

return (0);

}