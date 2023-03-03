#include <stdio.h>

int main(void){

    int fileiraEscolhida;
    float fileira[12];
    float matriz[12][12];
    float calculo = 0.0;
    char operacao;
    int i;
    int j;
    int k = 0;

    //Para determinar a fileira a ser calculada
    printf ("Digite um valor de 0 a 11 para determinar a fileira: ");
    scanf (" %i", &fileiraEscolhida);

     //Para determinar a operação a ser realizada
    printf ("Digite S para soma ou M para media: ");
    scanf (" %s", &operacao);

    //Matriz para receber os valores do usuário
    for (i = 0; i < 12; i++) {
        
        for (j = 0; j < 12; j++) {
            printf ("Digite um valor: \n");
            scanf ("%f", &matriz[i][j]);
        }
    }

    //Para passar os valores da fileira escolhida para o vetor
    for (i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {

            if (fileiraEscolhida == i) {
                    fileira[k] = matriz[i][j];
                    k++;
            }
        }
    }
    
    //Realizando o cálculo de soma
    for (i = 0; i < 12; i++) {
        calculo = calculo + fileira[i];
    }
    
    //Mostrando o resultado em virtude da operacao
    printf("O resultado da operacao e: ");
    switch (operacao) {
        case 'S' :
            printf ("%.1f\n", calculo);
            break;
        
        case 'M' :
            calculo = calculo / 12.0;
            printf ("%.1f\n", calculo);
            break;

        default :
            break;
    }
    
    return (0);
    
}