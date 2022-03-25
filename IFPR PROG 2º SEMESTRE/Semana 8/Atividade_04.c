#include <stdio.h>
#include <stdlib.h>

void piramide(char **pir, int linhas, int colunas);

int main() {

    int lin, col, i;

    char **matr;

    printf("Altura da piramide: ");
    scanf("%i", &lin);

    col = lin;

    matr = malloc(lin * sizeof(char*));

    for(i=0; i<lin; i++){
        matr[i] = malloc(lin * sizeof(char));
    }


    piramide(matr,lin,col);

    printf("\n");
    for(int l = 0; l<lin; l++){

        for(int c = 0; c<col; c++){

            printf("%c ",matr[l][c]);

        }

        printf("\n");
    }

    printf("\n\n");
    return 0;
}

void piramide(char **pir, int linhas, int colunas){

    int l, c;
    int test = colunas - 1;


    for(l=0; l < linhas; l++){

        for(c=0; c < colunas; c++){
            if(c < test){
                pir[l][c] = ' ';
            }
            else{
                pir[l][c] = '*';
            }
        }
        test--;
    }
}