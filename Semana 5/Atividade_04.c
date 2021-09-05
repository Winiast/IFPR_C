#include <stdio.h>

int main()
{
    //Declarando variaveis

    int v1, v2, domingo, segunda, terca, quarta, quinta, sexta, sabado;
    
    domingo = 1;
    segunda = 2;
    terca =3;
    quarta = 4;
    quinta = 5;
    sexta = 6;
    sabado = 7;

    printf("- Digite os dois Dias: ");
    scanf("%i %i", &v1, &v2);

    // Codigo v1
    
    if (v1 == domingo){
        printf("[Domingo, ");
    }
    else if (v1 == segunda){
        printf("[Segunda, ");
    }
    else if (v1 == terca){
        printf("[Terca, ");
    }
    else if (v1 == quarta){
        printf("[Quarta, ");
    }
    else if (v1 == quinta){
        printf("[Quinta, ");
    }
    else if (v1 == sexta){
        printf("[Sexta, ");
    }
    else{
        printf("[Invalido, ");
    }

    // Codigo v2

     if (v2 == domingo){
        printf("Domingo]");
    }
    else if (v2 == segunda){
        printf("Segunda]");
    }
    else if (v2 == terca){
        printf("Terca]");
    }
    else if (v2 == quarta){
        printf("Quarta]");
    }
    else if (v2 == quinta){
        printf("Quinta]");
    }
    else if (v2 == sexta){
        printf("Sexta]");
    }
    else{
        printf("Invalido]");
    }

}