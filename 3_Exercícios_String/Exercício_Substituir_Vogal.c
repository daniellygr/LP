#include <stdio.h>

int main (void) {
    
    int letras;
    int i;
    int contadorVogal = 0;

    printf ("Digite a quantidade de letras da palavra: ");
    scanf ("%d", &letras);

    char palavra[letras + 1];

    printf ("Digite a palavra: ");
    scanf ("%s", &palavra);

    for (i = 0; i < letras; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            contadorVogal += 1;
        }
    }

    printf ("Quantidade de vogais: %d\n", contadorVogal);

    char caractere = '&';

    for (i = 0; i < letras; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            palavra[i] = caractere;
        }
    }

    printf ("Palavra: %s", palavra);

    return (0);
}