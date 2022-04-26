#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    char *doc, *seq, op, c;
    int i, a, b, e, cont_pont = 0, cont_seq = 0, cont;

    do{
        
        fp = fopen("sars.txt", "a+");

        if(fp == NULL){
            printf("[ERRO]!!!\n\n");
            return 0;
        }

        seq = malloc(99 * sizeof(char));

        i = 0;
        doc = malloc(1 * sizeof(char));
        do{
            c = fgetc(fp);
            if(c == '\n'){
                c = fgetc(fp);
                doc[i] = c;
                i++;
            }
            else{
                doc[i] = c;
                i++;
            }
            
            doc = realloc(doc, (1+i) * sizeof(char));

        }while(c != EOF);
        doc[1+i] = '\0';

        system("clear");
        printf("\n---------------------------------");
        printf("\n- Bases Nitrogenadas => A U C G -");
        printf("\n---------------------------------");
        printf("\n- Digite a sequencia: ");
        fflush(stdin);
        gets(seq);

        for(a = 0; seq[a] != '\0'; a++){
            if(seq[a] < 65 || seq[a] > 90){
                seq[a] = seq[a] - 32;
            }
        }

        printf("- Buscando(%s)...",seq);

        for(a = 0; seq[a] != '\0'; a++){
            cont_pont++;
        }

        seq = realloc(seq, cont_pont * sizeof(char));
        

        for(a = 0; doc[a] != '\0'; a++){

            cont = 0;
            if(doc[a] == seq[0]){

                for(b = 0, e = a; seq[b] != '\0'; b++){

                    if(doc[e] == seq[b]){
                        e++;
                        cont++;
                    }
                }

                if(cont == cont_pont){
                    cont_seq++;
                }
            }
            
        }

        printf("\n- Total de ocorrencias [%s] = %i",seq,cont_seq);
        printf("\n---------------------------------");
        printf("\n\nDeseja efetuar uma nova analise (s) ou (n)? ");
        scanf("%c", &op);

        fclose(fp);

    }while(op != 'n');
}