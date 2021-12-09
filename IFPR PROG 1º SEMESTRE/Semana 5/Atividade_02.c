#include <stdio.h>

int main()
{   
    //Declarando variaveis

    int idade;

    //Recebendo e Armazenando Valores

    printf("Digite a idade: ");
    scanf("%i", &idade);

    //Logica

    if (idade >= 60){
        printf("- Idoso");
    }
    else if (idade <= 59 && idade >= 18){
        printf("- Adulto");
    }
    else if (idade < 18 && idade >= 12){
        printf("- Adolescente");
    }
    else if (idade < 12 && idade > 0){
        printf("- Crianca");
    }
    else{
        printf("- Idade Invalida!");
    }
}   