#include <stdio.h>

int main(void) {

    int matriz[8][8] /* = { {6,5,4,3,2,1,0,0},
                            {6,5,4,3,2,1,0,0},
                            {6,5,4,3,2,1,0,0},
                            {6,5,4,3,2,1,0,0}, 
                            {6,5,4,3,2,1,0,0},
                            {6,5,4,3,2,1,0,0},
                            {6,5,4,3,2,1,0,0},
                            {6,5,4,3,2,1,0,0} }*/;
    int vetor[7] = {0,0,0,0,0,0,0};
    int i;
    int j;
    char pecas[7][18] = {"Ausencia de pecas",
                         "Peao",
                         "Cavalo",
                         "Torre",
                         "Bispo",
                         "Rei",
                         "Rainha"};
    
    //Solicitar os valores da matriz
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf ("Insira um valor de 0 a 6 para a linha %i e coluna %i: ", i, j);
            scanf ("%i", &matriz[i][j]);

            //Adicionar os valores de 0 a 6 ao vetor correspondente e incrementar conforme ocorrência
            vetor[matriz[i][j]]++;
        }
    }

    //Exibir as quantidades de cada peca
    for (i = 0; i < 7; i++) {
        printf("%s = %i \n", pecas[i], vetor[i]);
    }
    
    return 0;
}