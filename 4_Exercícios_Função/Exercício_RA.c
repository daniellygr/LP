#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//1-receber a quantidade de ras;
//2-receber para cada linha os ras antigos;
//3-atribuir valores fixos aos 6 primeiros digitos do novo ra;
//4-atribuir valores fixos aos 3 caracteres seguites;
//5-condicional e atribuição do codigo do turmo;
//6-atribuir 3 ultimos digitos

void receberRas(int casosDeTeste, char raAntigo[][9]);
void campusCurso(char raNovo[][14], char campusCursoCodigos[], int casosDeTeste);
void anoSemestre(char raAntigo[][9], char raNovo[][14], int casosDeTeste);
void turno(char raAntigo[][9], char raNovo[][14], int casosDeTeste);
void numeroSequencial(char raAntigo[][9], char raNovo[][14], int casosDeTeste);

int main(void){
    
    int casosDeTeste;
    
    //printf("Digite a quantidade de casos: ");
    scanf("%d", &casosDeTeste);
    
    char raAntigo[casosDeTeste][9];
    char raNovo[casosDeTeste][14];
    char campusCursoCodigos[7] = "003048";

    receberRas(casosDeTeste, raAntigo);
    campusCurso(raNovo, campusCursoCodigos, casosDeTeste);
    anoSemestre(raAntigo, raNovo, casosDeTeste);
    turno(raAntigo, raNovo, casosDeTeste);
    numeroSequencial(raAntigo, raNovo, casosDeTeste);
    
}

void receberRas(int casosDeTeste, char raAntigo[][9]) {
    for (int linha = 0; linha < casosDeTeste; linha++) {
        //printf("Digite o RA %d:\n", linha + 1);
        scanf(" %[^\n]", raAntigo[linha]);
        fflush(stdin);
    }
}

void campusCurso(char raNovo[][14], char campusCursoCodigos[], int casosDeTeste) {
    int j;

    for (int i = 0; i < casosDeTeste; i++) {

        for (j = 0; j < 6; j++) {
            raNovo[i][j] = campusCursoCodigos[j];
        }

        j++;
    }
}

void anoSemestre(char raAntigo[][9], char raNovo[][14], int casosDeTeste) {
    int j;
    int k = 2;

    for (int i = 0; i < casosDeTeste; i++) {

        for (j = 6; j < 9; j++) {
            raNovo[i][j] = raAntigo[i][k];
            k++;
        }

        k = 2;
    }
}

void turno(char raAntigo[][9], char raNovo[][14], int casosDeTeste) {
    char codigoTurno[casosDeTeste][2];
    char comparacaoDiurno[2] = "D";
    char comparacaoVespertino[2] = "V";
    char comparacaoNoturno[2] = "N";

    for(int i = 0; i < casosDeTeste; i++) {
        codigoTurno[i][0] = raAntigo[i][1];
    }
    
    for(int i = 0; i < casosDeTeste; i++) {
        if (strcmp(codigoTurno[i], comparacaoDiurno) == 0) {
            raNovo[i][9] = '1';
        }
        else if (strcmp(codigoTurno[i], comparacaoVespertino) == 0) {
            raNovo[i][9] = '2';
        }
        else {
            raNovo[i][9] = '3';
        }
    }
}

void numeroSequencial(char raAntigo[][9], char raNovo[][14], int casosDeTeste) {
    int i;
    int j;
    int k = 5;

    for(i = 0; i < casosDeTeste; i++) {
        for(j = 10; j < 13; j++) {
            raNovo[i][j] = raAntigo[i][k];
            k++;
        }
        raNovo[i][13] = '\0';
        k = 5;
    }
    
    for(i = 0; i < casosDeTeste; i++) {
        printf("%s\n", raNovo[i]);
    }
} 