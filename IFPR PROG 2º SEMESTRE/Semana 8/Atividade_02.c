#include <stdio.h>
#include <stdlib.h>

void desembaralhar(char *p, char *pf);

int main(){
    char *p, *pf;

    p = malloc(30 * sizeof(char));
    pf = malloc(30 * sizeof(char));

    printf("Digite uma palavra: ");
    gets(p);
    fflush(stdin);
    printf("Digite a mesma palavra embaralhada: ");
    gets(pf);

   
    desembaralhar(p, pf);
    printf("Desembaralhada: %s", pf);

}

void desembaralhar(char *p, char *pf){
    
    int i, aux, c;

    for(i = 0; p[i] != '\0'; i++){

        for(c = 0; pf[c] != '\0'; c++){

            if(p[i] == pf[c]){
                aux = pf[i];
                pf[i] = pf[c]; 
                pf[c] = aux;
            }
        }
        
    }
}