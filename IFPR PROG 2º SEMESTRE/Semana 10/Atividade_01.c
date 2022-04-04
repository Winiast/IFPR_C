#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[60];
    FILE *fp;
    
    fp = fopen("alunos.txt", "a+");

    if(fp == NULL){
        printf("[ERRO]");

    }else{
        fflush(stdin);
        printf("Aluno: ");
        gets(nome);

        fputs(nome, fp);
        fputs("\n", fp);

        fclose(fp);

        printf("\n");
    }
}