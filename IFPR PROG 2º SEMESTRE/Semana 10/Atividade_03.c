#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fa, *fd;
    char nome_Aluno[40], nome_Disciplina[40];
    int cont = 1, contador = 1;

    fa = fopen("alunos.txt", "a+");
    fd = fopen("disciplina.txt", "a+");

    if(fa == NULL || fd == NULL){
        printf("[ERRO]");
    }else{
        printf("ALUNOS CADASTRADOS \n");
        printf("-------------------\n");

        while(fgets(nome_Aluno, 40, fa) != NULL){
            printf("%i | %s",cont, nome_Aluno);
            cont++;
        }
        printf("-------------------\n");
        printf("DISCIPLINAS CADASTRADAS\n");
        printf("-------------------\n");

        while(fgets(nome_Disciplina, 40, fd) != NULL){
            printf("%i | %s", contador, nome_Disciplina);
            contador++;
        }
        printf("-------------------\n");
    }
}