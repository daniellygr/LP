#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    int casoDeteste;
    int equivalenteMinusculoAscii;
    int contador;
    int maiorValor = 0;
    char minusculo;
    char retorno;
    int contadorAlfabeto[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("Quantidade de casos de teste: ");
    scanf("%d", &casoDeteste);

    char frase[casoDeteste][201];
   
    printf("Digite a frase: ");
    
    for (int linha = 0; linha < casoDeteste; linha++) {
        scanf (" %[^\n]", frase[linha]);
        fflush(stdin);
    }

    for (int linha = 0; linha < casoDeteste; linha++) {

        for (int coluna = 0; coluna < strlen(frase[linha]); coluna++) {
            minusculo = tolower(frase[linha][coluna]);
            equivalenteMinusculoAscii = minusculo;
            //printf("%d\n", equivalenteMinusculoAscii);
            contador = equivalenteMinusculoAscii - 97;
            //printf("%d\n", contador);
            contadorAlfabeto[contador] += 1;
            //printf("%d\n", contadorAlfabeto[contador]);
        }

        for (int coluna = 0; coluna < 26; coluna++) {
            if (contadorAlfabeto[coluna] > maiorValor) {
                maiorValor = contadorAlfabeto[coluna];
            }
        }

        for (int coluna = 0; coluna < 26; coluna++) {
            if (contadorAlfabeto[coluna] == maiorValor) {
                retorno = coluna + 97;
                printf ("%c", retorno);
            }
        }

        maiorValor = 0;
        memset(contadorAlfabeto, 0, sizeof(contadorAlfabeto));
        printf("\n");
    }

    return 0;
}


