#include <stdio.h>

int main(){

    int qtde = 0, palavra, cont, a, frase, b, pos;

for(qtde = 0; palavra[qtde] != '\0'; qtde++) { }

    // palavra
    cont = b = pos = 0;
    for(a=0; palavra[a] != '\0'; a++) {
        if(palavra[a] == frase[b]) {
            b++;
            cont++;
            if(cont == qtde) {
                printf("Possível");
                break;
            }
        }
        else {
            pos++;
            b = pos;
            a=-1;
            cont=0;

            if(frase[b] == '\0') {
                printf("Não é posśivel");
            
break;
            }
        }
    }

}