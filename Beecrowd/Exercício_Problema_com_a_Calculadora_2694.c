#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {

int linha;
int i;
int j;
int soma = 0;

printf ("Digite a quantidade de linhas: ");
scanf ("%d", &linha);

char dados[linha][15];
int a[linha];

for (i = 0; i < linha; i++) {
	//Receber os dados
	scanf ("%s", dados[i]);
}

/*for (i = 0; i < linha; i++) {
    printf("%s", dados[i]);
}*/

for (i = 0; i < linha; i++) {
    for (j = 0; j < 15; j++) {
        if (isdigit(dados[i][j])) {
            soma += isdigit(dados[i][j]);
        }
    }
}

for (i = 0; i < linha; i++) {
    printf ("Resultado: %d", a[i]);
}

return (0);

}