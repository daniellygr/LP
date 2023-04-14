#include <stdio.h>

int main (void) {

    int qtdLetras;
    int i;
    int contadorLetra = 0;
    char letra;

    printf ("Digite a quantidade de letras da palavra: ");
    scanf ("%d", &qtdLetras);

    char palavra[qtdLetras + 1];

    printf ("Digite a palavra: ");
    scanf ("%s", &palavra);

    printf ("Informe uma letra: ");
    scanf (" %c", &letra);

    for (i = 0; i < qtdLetras; i++) {
         if (palavra[i] == letra) {
            contadorLetra += 1;
         }
    }

    printf ("Quantidade de '%c' em '%s': %d", letra, palavra, contadorLetra);

    return (0);
}