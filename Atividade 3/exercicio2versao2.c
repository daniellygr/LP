#include <stdio.h>

int main(void){

    int fileiraEscolhida;
    float matriz[12][12];
    float calculo = 0.0;
    char operacao;
    int i;
    int j;

    //Para determinar a fileira a ser calculada
    printf ("Digite um valor de 0 a 1 para determinar a fileira: ");
    scanf (" %i", &fileiraEscolhida);

    //Para determinar a operação a ser realizada
    do {
        printf ("Digite S para soma ou M para media: ");
        scanf (" %c", &operacao);
    } 
    while (!(operacao == 'S' || operacao == 'M'));
   
    //Matriz para receber os valores do usuário
    for (i = 0; i < 12; i++) {
        
        for (j = 0; j < 12; j++) {
            printf ("Digite um valor: \n");
            scanf ("%f", &matriz[i][j]);
        }
    }

    //Para somar os valores na fileira escolhida
    for(j = 0; j < 12; j++) {
        calculo = calculo + matriz[fileiraEscolhida][j];
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