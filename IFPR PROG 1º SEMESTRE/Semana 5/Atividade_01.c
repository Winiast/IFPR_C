#include <stdio.h>


int main()
{
    //Declarando variaveis

    float tempo_01, tempo_02, tempo_03;

    //Escrevendo na Tela e Lendo os tempos

    printf("Digite os tres tempos: ");
    scanf("%f %f %f", &tempo_01, &tempo_02, &tempo_03);

    //Logíca

    if (tempo_01 > tempo_02 && tempo_02 > tempo_03){
        printf("- 1 Lugar >%.1f\n", tempo_01);
        printf("- 2 Lugar >%1.f\n", tempo_02);
        printf("- 3 Lugar >%.1f\n", tempo_03);
    }
    else if (tempo_01 > tempo_03 && tempo_03 > tempo_02){
        printf("- 1 Lugar >%.1f\n", tempo_01);
        printf("- 2 Lugar >%.1f\n", tempo_03);
        printf("- 3 Lugar >%.1f\n", tempo_02);
    }
    else if (tempo_02 > tempo_01 && tempo_01 > tempo_03){
        printf("- 1 Lugar >%.1f\n", tempo_02);
        printf("- 2 Lugar >%.1f\n", tempo_01);
        printf("- 3 Lugar >%.1f\n", tempo_03);
    }
     else if (tempo_02 > tempo_03 && tempo_03 > tempo_01){
        printf("- 1 Lugar >%.1f\n", tempo_02);
        printf("- 2 Lugar >%.1f\n", tempo_03);
        printf("- 3 Lugar >%.1f\n", tempo_01);
    }
     else if (tempo_03 > tempo_02 && tempo_02 > tempo_01){
        printf("- 1 Lugar >%.1f\n", tempo_03);
        printf("- 2 Lugar >%.1f\n", tempo_02);
        printf("- 3 Lugar >%.1f\n", tempo_01);
    }
     else if (tempo_03 > tempo_01 && tempo_01 > tempo_03){
        printf("- 1 Lugar >%.1f\n", tempo_03);
        printf("- 2 Lugar >%.1f\n", tempo_01);
        printf("- 3 Lugar >%.1f\n", tempo_03);
    }
}   