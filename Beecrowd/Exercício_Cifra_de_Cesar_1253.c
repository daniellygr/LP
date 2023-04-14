#include <stdio.h>
#include <string.h>

int main(void) {

    int j;
    int valorCorrespondenteNaAscii;
    int casoDeTeste;
    int diferencaCriptografadoLetraA;
    int criptografiaSemDiferenca;
    
    printf ("Digite a quantidade de casos de teste: ");
    scanf ("%d", &casoDeTeste);
    
    char dadosCriptografados[casoDeTeste][51];
    char dadosOriginais[casoDeTeste][51];
    int criptografia[casoDeTeste];
    
    printf ("Forneca os dados e a criptografia: ");
    
    for (int i = 0; i < casoDeTeste; i++) {
        
        scanf("%s", dadosCriptografados[i]);
        scanf("%d", &criptografia[i]);
    }
    
    for (int i = 0; i < casoDeTeste; i++) {

        for (j = 0; j < strlen(dadosCriptografados[i]); j++) {
            
            valorCorrespondenteNaAscii = dadosCriptografados[i][j];
            
            if ((valorCorrespondenteNaAscii - criptografia[i]) < 65) {
                diferencaCriptografadoLetraA = valorCorrespondenteNaAscii - 65;
                criptografiaSemDiferenca = criptografia[i] - diferencaCriptografadoLetraA;
                dadosOriginais[i][j] = 91 - criptografiaSemDiferenca;
            }
            else {
                valorCorrespondenteNaAscii = valorCorrespondenteNaAscii - criptografia[i];
                dadosOriginais[i][j] = valorCorrespondenteNaAscii;
            }

        }

        dadosOriginais[i][j] = '\0';

    }

    for (int i = 0; i < casoDeTeste; i++) {
        printf ("%s\n", dadosOriginais[i]);
    }

    return (0);

}