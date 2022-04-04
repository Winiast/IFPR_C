#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    char disciplina[40];

    fp = fopen("disciplina.txt", "a+");

    if(fp == NULL){
        printf("[ERRO]");
    }else{
        fflush(stdin);
        printf("Disciplina: ");
        gets(disciplina);

        fputs(disciplina, fp);
        fputs("\n", fp);

        fclose(fp);
    }
}