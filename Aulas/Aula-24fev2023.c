#include <stdio.h>

int main(void){

    int tab[8][8];/*={ {6,5,4,3,2,1,0,0},
                    {6,5,4,3,2,1,0,0},
                    {6,5,4,3,2,1,0,0},
                    {6,5,4,3,2,1,0,0}, 
                    {6,5,4,3,2,1,0,0},
                    {6,5,4,3,2,1,0,0},
                    {6,5,4,3,2,1,0,0},
                    {6,5,4,3,2,1,0,0} };*/
    int vetSoma[7] = {0,0,0,0,0,0,0};
    int i;
    int j;

    printf ("Digite 64 valores:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            scanf ("%i", &tab[i][j]);
        }
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            switch (tab[i][j]) {
                case 0 :
                    vetSoma[0]++;
                    break;
                
                case 1 :
                    vetSoma[1]++;
                    break;
                
                case 2 :
                    vetSoma[2]++;
                    break;

                case 3 :
                    vetSoma[3]++;
                    break;

                case 4 :
                    vetSoma[4]++;
                    break;
                
                case 5 :
                    vetSoma[5]++;
                    break;

                case 6 :
                    vetSoma[6]++;
                    break;

                default :
                    break; 
               }
        }
    }
    
    for (i = 0; i < 7; i++) {
        printf ("\nVet[%i] = %i", i, vetSoma[i]);
    }
return 0;
}