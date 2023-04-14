#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void recebeDadosBoleto(char boleto[]);
void substring(char fraseOrigem[], char fraseDestino[]);
void nomeDoBanco(int banco);
float valorInteiroBoleto(char boleto[], char valor[]);
float valorDecimalBoleto(char boleto[], char valorDecimal[]);
void valorBoleto(float valorInteiroReal, float valorDecimalReal);

int main(void) {

    //1- receber e armazenar o boleto
    //2- extrair e comparar os dados do Banco
    //3- extrair o valor do boleto e aplicar os 10%
    //4- mostrar na tela o banco e o valor 

    char boleto[54];
    char bancoDigito[4] = "000";
    char condicao[4] = "FIM";
    char valorInteiro[9] = "000";
    char valorDecimal[3] = "00";
    int banco;
    float valorInteiroReal;
    float valorDecimalReal;

    printf("Digite FIM para sair\n");

    recebeDadosBoleto(boleto);

    while ((strcmp(boleto, condicao) != 0)) {

        substring(boleto, bancoDigito);
        banco = atoi(bancoDigito);
        nomeDoBanco(banco);

        valorInteiroReal = valorInteiroBoleto(boleto, valorInteiro);
        valorDecimalReal = valorDecimalBoleto(boleto, valorDecimal);

        valorBoleto(valorInteiroReal, valorDecimalReal);
        
        recebeDadosBoleto(boleto);    
    }
}

void recebeDadosBoleto(char boleto[]) {
    printf("Digite o boleto: ");
    scanf (" %[^\n]", boleto);
    fflush(stdin);
}

void substring(char fraseOrigem[], char fraseDestino[]) {
    for (int i = 0; i <= 2; i++) {
        fraseDestino[i] = fraseOrigem[i];
    }
}

void nomeDoBanco(int banco) {
    switch (banco) {
            case 001:
                printf("Banco do Brasil\n");
                break;

            case 033:
                printf("Santander\n");
                break;

            case 104:
                printf("Caixa Economica Federal\n");
                break;

            case 341:
                printf("Itau\n");
                break;

            case 745:
                printf("Citibank\n");
                break;  
            
            default:
                break;
            }
}

float valorInteiroBoleto(char boleto[], char valorInteiro[]) {
    int j = 0;
    int valorInteiroReal;

    for (int i = 43; i <= 50; i++) {
        valorInteiro[j] = boleto[i];
        j++;
    }
    valorInteiroReal = atof(valorInteiro);

    return valorInteiroReal;
}

float valorDecimalBoleto(char boleto[], char valorDecimal[]) {
    int j = 0;
    int valorDecimalReal;

    for (int i = 51; i <= 52; i++) {
        valorDecimal[j] = boleto[i];
        j++;
    }
    valorDecimalReal = atof(valorDecimal);

    return valorDecimalReal;
}

void valorBoleto(float valorInteiroReal, float valorDecimalReal) {
    float decimal;
    float valorComJuros;

    decimal = valorDecimalReal / 100;
    valorInteiroReal += decimal;
    valorComJuros = valorInteiroReal * 1.1;
    printf("Valor do boleto com juros de 10 por cento = %.2f\n", valorComJuros);
}
