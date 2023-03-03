#include <stdio.h>
#include <math.h>

int main(void)
{
    int comodo;
    int i;
    int totalLampada = 0;
    int totalPotencia = 0;
    
    //Solicitar a quantidade de comôdos da casa
    printf ("Digite a quantidade de comodos da casa: ");
    scanf ("%i", &comodo);

    int largura[comodo];
    int comprimento[comodo];
    int areaComodo[comodo];
    int classe[comodo];
    int potencia[comodo];
    float lampada[comodo];
    
    //Solicitar a dimensão de cada ambiente e calculo da área de cada ambiente
    for (i = 1; i <= comodo; i++) {
        printf ("Digite a largura do ambiente %i em metros: ", i);
        scanf ("%i", &largura[i]);
        
        printf ("Digite o comprimento do ambiente %i em metros: ", i);
        scanf ("%i", &comprimento[i]);
        
        areaComodo[i] = largura[i] * comprimento[i];
    }
    
    //Solicitar a classe de cada ambiente
    for (i = 1; i <= comodo; i++) {
        printf ("Digite a classe do ambiente %i: ", i);
        scanf ("%i", &classe[i]);
    }
    
    //Calculo da potencia de iluminacao
    for (i = 1; i <= comodo; i++) {
        if (classe[i] == 1) {
            potencia[i] = 10 * areaComodo[i];
        }
        else if (classe[i] == 2) {
            potencia[i] = 15 * areaComodo[i];
        }
        else if (classe[i] == 3) {
            potencia[i] = 18 * areaComodo[i];
        }
        else if (classe[i] == 4) {
            potencia[i] = 20 * areaComodo[i];
        }
        else if (classe[i] == 5) {
            potencia[i] = 25 * areaComodo[i];
        }
    }
    
    //Calculo da quantidade de lampadas por ambiente
    for (i = 1; i <= comodo; i++) {
        lampada[i] = potencia[i] / 60.0;
        lampada[i] = ceil (lampada[i]);
    }
    
    //Exibir para o usuario por comodo
    for (i = 1; i <= comodo; i++) {
        printf ("Area do comodo %i: %i \n", i, areaComodo[i]);
        printf ("Potencia de iluminacao do comodo %i: %i \n", i, potencia[i]);
        printf ("Quantidade de lampadas para comodo %i: %.0f \n", i, lampada[i]);
    }
    
    //Calcular o total de lampadas e potencia da residencia
    for (i = 1; i <= comodo; i++) {
        totalPotencia = totalPotencia + potencia[i];
        totalLampada = totalLampada + lampada[i];
    }

    //Exibir o total de lampadas e potencia da residencia
    printf ("Total de potencia: %i \n", totalPotencia);
    printf ("Total de lampadas: %i", totalLampada);
    
    return (0);
}