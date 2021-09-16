#include <stdio.h>

int main(){
    //Declarando variaveis
    int Valor, contador, TestePrimos,contadorPrimeza;

    // Pegando o numero
    printf("Digite um numero: ");
    scanf("%i", &Valor);
    //Setando valores das variaveis
    contador = 1;
    TestePrimos = 0;
    contadorPrimeza = 0;
    //Entrada do laco conferindo enquanto o contador for menor que o valor informado
    while(contador <= Valor){
        //Verificando se o valor da 0
        TestePrimos = Valor % contador;
        // Colando no contador se for 0
        if(TestePrimos == 0){
            contadorPrimeza = contadorPrimeza + 1;
        }

        contador = contador + 1;

    }

    //Configurando valores, se tiver apenas dois zeros é primo
    if (contadorPrimeza == 2){
        printf(" - [ PRIMO ] ");
        }

    // Se não é Nao primo
    else if(contadorPrimeza > 2){
        printf("- [NAO PRIMO]");
    }
}