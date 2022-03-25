#include <stdio.h>
#include <stdlib.h>

void referencia(char *p);

int main(){
    char *p;

    p = malloc(100 * sizeof(char));
    printf("Digite um nome: ");
    gets(p);

    referencia(p);

}

void referencia(char *p){
    int c = 0, aux, flag = 1;

    for(c=0; p[c] != '\0'; c++){
        if(p[c] == ' '){
            aux = c;
        }
    }

    printf("- Referencia: ");
    for(c=aux + 1; p[c] != '\0'; c++){
        if(flag == 1){
            printf("%c", p[c]);
            flag =0;
        }else{
        printf("%c", p[c] - 32);
        }
    }
    printf(", ");

    for(c=0; p[c] != ' '; c++){
        if(flag == 1){
            printf("%c", p[c]);
            flag = 0;
        }else{
            printf("%c", p[c]);
        }
        
    }
    
    for(c = 0; c < aux; c++){
        if(p[c] == ' ' && p[c + 1] <= 90){
            printf(" %c.", p[c + 1]);
        }
    }
}