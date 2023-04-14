#include <stdio.h>
#include <string.h>

void Cripto(char texto1[9], char texto2[9]) {

    char controle1[16] = "aedfthkoç~852cn";
    char controle2[16] = "zsvgbjxm,134y?p";
    int i;
    int j;

    //Percorrer cada caracter do texto recebeido pelo usuário
    for (i = 0; i < strlen(texto1); i++) {

        //Percorrer cada caracter das variáveis de controle a fim de criptografar o texto recebido
        for (j = 0; j < strlen(controle1); j++) {
            
            //Criptografar
            if (texto1[i] == controle1[i]) {
                texto2[i] = controle2[i];
                break;
            }
            if (texto1[i] == controle2[i]) {
                texto2[i] = controle1[i];
                break;
            }
            
            texto2[i] = texto1[i];
        }
    }
    
    //Atribuir o vazio ao último caracter do texto criptografado
    texto2[strlen(texto1)] = '\0';
}

int main() {

    char texto1[9];
    char texto2[9];
    char texto3[9];

    printf ("Informe um texto de ate 8 caracteres: ");
    scanf ("%[^\n]", texto1);

    Cripto(texto1, texto2);
    Cripto(texto2, texto3);

    printf ("Texto criptografado: \n%s\nTexto descriptografado: \n%s\n", texto2, texto3);

    return 0;

}


