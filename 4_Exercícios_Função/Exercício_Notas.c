#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void fcabecalho(void);
float fentradadados(int indice);
float fsoma(float notas[]);
float fmedia(float soma);
float fmediaponderada(float notas[]);
float fdesviopadrao(float notas[], float media);
void fmaiormenor(float notas[], float maiorMenor[]);

int main(void) {

    int opcao = 1; //iniciar com 1 para que o while rode a primeira vez
    int vetorFoiPreenchido = 0; //"booleano" representando o falso
    float media;
    float soma;
    float notas[5];
    float mediaPonderada;
    float desvioPadrao;
    float maiorMenor[2] = {0,10};

    //funcao sem parametros para chamar a funcao fcabecalho
    fcabecalho();

    //enquanto a opcao for diferente de 6, o menu continuara aparecendo
    while (opcao != 6) {

        printf("1 - Entrar com os dados\n");
        printf("2 - Calcular a media aritmetica\n");
        printf("3 - Calcular a media ponderada\n");
        printf("4 - Calcular o desvio padrao\n");
        printf("5 - Achar o maior e menor valor\n");
        printf("6 - Sair do programa\n\n");
        printf("Entre com a opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
            {
                case 1:

                    //para cada iteração, a funcao fentradadados é chamada com o inteiro da iteração
                    for (int i = 0; i < 5; i++) {
                        /*cada posicao do vetor notas recebe o retorno da funcao fentradadados na posicao 
                        da iteração*/
                        notas[i] = fentradadados(i);
                    }
                    
                    // tornar o vetor preenchido, caso entre no caso 1
                    vetorFoiPreenchido = 1; 

                    printf ("\nDigite outra opcao: \n");
                    break;
                
                case 2:
                    //caso a variavel seja 0, o menu aparece novamente e a mensagem aparece para o usuario
                    if (vetorFoiPreenchido == 0) {
                        printf("Insira os dados primeiro!\n");
                    }
                    //caso a variavel seja 1 (entrou no caso 1), ele realiza o calculo da media e retorna 
                    else {
                        /*variavel soma recebe o valor retornado da funcao fsoma, a partir do vetor notas do
                        caso 1*/
                        soma = fsoma(notas);
                        /*variavel media recebe o valor retornado da funcao fsoma, a partir do parametro do 
                        tipo float 'soma'*/
                        media = fmedia(soma);
                        printf("A media aritmetica das notas eh: %.2f\n", media);
                    }
                    printf ("\nDigite outra opcao: \n");
                    break;

                case 3:
                    //caso a variavel seja 0, o menu aparece novamente e a mensagem aparece para o usuario
                    if (vetorFoiPreenchido == 0) {
                        printf("Insira os dados primeiro!\n");
                    }

                    mediaPonderada = fmediaponderada(notas);
                    printf("A media ponderada das notas eh: %.2f\n", mediaPonderada);
                    break;

                case 4:
                    //caso a variavel seja 0, o menu aparece novamente e a mensagem aparece para o usuario
                    if (vetorFoiPreenchido == 0) {
                        printf("Insira os dados primeiro!\n");
                    }

                    soma = fsoma(notas);
                    media = fmedia(soma);
                    desvioPadrao = fdesviopadrao(notas, media);
                    printf("O desvio padrao das notas eh: %.2f\n", desvioPadrao);
                    break;

                case 5:
                    //caso a variavel seja 0, o menu aparece novamente e a mensagem aparece para o usuario
                    if (vetorFoiPreenchido == 0) {
                        printf("Insira os dados primeiro!\n");
                    }

                    fmaiormenor(notas, maiorMenor);
                    printf("A maior nota eh %.2f e a menor nota eh %.2f\n", maiorMenor[0], maiorMenor[1]);
                    break;

                case 6:
                    return 0;
                    break;

                default:
                    printf ("Digite uma opcao valida!\n");
                } 
    }
}

void fcabecalho(void) {
    printf(">>Estatistica<<\n\n");
}

//fentradadados tem como parametro um int cujo valor sera o "i" do caso 1
float fentradadados(int i) {

    float nota;
    /*para o usuario aparece a solicitacao de cada nota*/
    printf("Informe a nota %d: ", i + 1);
    /*cada nota é armazenada na variavel 'nota' que sera retornada para cada iteração no caso 1*/
    scanf ("%f", &nota);

    return nota;
}

/*fsoma retorna um float e tem como parametro um float (vetor)*/
float fsoma(float notas[]) {
    /*inicia a soma com 0 para não ter lixo da memória*/
    float soma = 0;
    /*para cada iteração, o valor da posição 'i' do vetor é somado à variavel soma, que é retornada para o main*/
    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }

    return soma;
}

/*fmedia retorna um flot e tem como parametro um float*/
float fmedia(float soma) {
    float media;
    
    media = soma / 5;
    return media;
}

/*fmediaponderada retorna um float e tem como parametro um float*/
float fmediaponderada(float notas[]) {
    float peso[5] = {1,2,3,2,2};
    float soma = 0;
    float somaPesos = 0;
    float mediaPonderada;

    for (int i = 0; i < 5; i++) {
        soma += peso[i] * notas[i];
    }

    for (int i = 0; i < 5; i++) {
        somaPesos += peso[i];
    }

    mediaPonderada = soma / somaPesos;

    return mediaPonderada;
}

float fdesviopadrao(float notas[], float media) {
    float somaQuadrados = 0;
    float desvioPadrao;

    for (int i = 0; i < 5; i++) {
        somaQuadrados += pow((notas[i] - media), 2);
    }

    desvioPadrao = pow((somaQuadrados / 5), 0.5);

    return desvioPadrao;
}

void fmaiormenor(float notas[], float maiorMenor[]) {

    for (int i = 0; i < 5; i++) {
        if (notas[i] > maiorMenor[1]) {
            maiorMenor[0] = notas[i];
        }
        else {
            maiorMenor[1] = notas[i];
        }
    }

    //return maiorMenor[];
}
  