#include <stdio.h>

int main()
{   
    //Declarando Variáveis

    int v1, v2, v3, v4;

    //Mostrando e Lendo informações

    printf("Lados do Triangulo ");
    scanf("%i", &v1);

    //Lógica

    if (v1 < 1000){

        v2 = v1 / 100;
        v3 = (v1 % 100) / 10;
        v4 = (v1 % 100) % 10;
        

        printf("%i %i %i", v2, v3, v4);

        //Vendo se são iguais

        if (v2 == v3 && v3 == v4){
            printf("- Equilatero");
        }

        //Verificando se todos são diferentes

        else if (v2 != v3 && v3 != v4 && v2 != v4){
            printf("- Escaleno");
        }

        //Verificando igualdade de dois apenas

        else if (v2 == v3 && v3 !=v4 || v3 == v2 && v2 != v4 || v4 == v2 && v2 != v3){
            printf("- Isosceles");
        }
    }

    else{
        printf("Valor Invalido!!");
    }
}