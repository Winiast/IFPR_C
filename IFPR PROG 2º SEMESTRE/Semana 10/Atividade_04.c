#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int CadastrarAluno();
int CadastrarDisciplina();
int VisualizarAeD();
int MatricularAluno();
int VisualizarMatriculas();

int main(){

    int op = 0;
    int saida = 1;

while(saida != 0){
    printf("---------------------------------\n");
    printf("(1) - Cadastrar Aluno\n");
    printf("(2) - Cadastrar Disciplina\n");
    printf("(3) - Visualizar Alunos e Disciplinas\n");
    printf("(4) - Matricular Aluno\n");
    printf("(5) - Visualizar Matriculas\n");
    printf("(0) - Sair\n");
    printf("---------------------------------\n");
    printf("Opcao: ");
    fflush(stdin);
    scanf("%i", &op);
    printf("---------------------------------\n");
    

    switch(op){
        
        case 0:
            printf("[TCHAU]");
            saida = 0;
            break;
        
        case 1:
            CadastrarAluno();
            continue;;

        case 2:
            CadastrarDisciplina();
            continue;
        
        case 3:
            VisualizarAeD();
            continue;
        
        case 4:
            MatricularAluno();
            continue;

        case 5:

            VisualizarMatriculas();
            continue;
    }
}
    
}

int CadastrarAluno(){
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
        printf("[OK]");
    }
}

int CadastrarDisciplina(){
    FILE *fp;
    char Disciplina[50];

    fp = fopen("disciplina.txt", "a+");

    if(fp == NULL){
        printf("[ERRO]");
    }else{
        fflush(stdin);
        printf("Disciplina: ");
        gets(Disciplina);

        fputs(Disciplina, fp);
        fputs("\n", fp);

        fclose(fp);
        printf("[OK]");


    }
}

int VisualizarAeD(){
    FILE *fa, *fd;
    char nome_Aluno[40], nome_Disciplina[40];
    int cont = 1, contador = 1;

    fa = fopen("alunos.txt", "a+");
    fd = fopen("disciplina.txt", "a+");

    if(fa == NULL || fd == NULL){
        printf("[ERRO]");
    }else{
        getchar();
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

        
        printf("[OK]");

    }
}

int MatricularAluno() {

    FILE *fa, *fd, *fm;
    int la, ld, cont;
    char nome_aluno, nome_disciplina;


    fa = fopen("alunos.txt", "a+");
    fd = fopen("disciplina.txt", "a+");
    fm = fopen("matriculas.txt", "a+");

    if(fa == NULL || fd == NULL || fm == NULL){
        printf("[ERRO]!!!\n\n");
        return 0;
    }

    printf("- Linha Aluno: ");
    scanf("%i", &la);

    printf("- Linha Disciplina: ");
    scanf("%i", &ld);

    cont = 1;
    do{

        nome_aluno = fgetc(fa);

        if(cont == la){
            if(nome_aluno != '\n'){
                fputc(nome_aluno, fm);
            }    
        }

        if(nome_aluno == '\n'){
            cont++;
        }

    }while(nome_aluno != EOF);
    fputs("<=>", fm);
    cont = 1;
    do{

        nome_disciplina = fgetc(fd);

        if(cont == ld){
            if(nome_disciplina != '\n'){
                fputc(nome_disciplina, fm);
            }    
        }

        if(nome_disciplina == '\n'){
            cont++;
        }

    }while(nome_disciplina != EOF);
    fputc('\n', fm);

    printf("\n[OK]");
    getchar();
    getchar();

    fclose(fa);
    fclose(fd);
    fclose(fm);

}

int VisualizarMatriculas() {

    FILE *fm;
    char matricula[80];
    int lin = 1;

    fm = fopen("matriculas.txt", "a+");

    if(fm == NULL){
        printf("[ERRO]!!!");
        return 0;
    }

    printf("MATRICULAS EFETUADAS");
    printf("\n-------------------\n");

    while(fgets(matricula, 80, fm) != NULL){
        printf("%i | %s", lin, matricula);
        lin++;
    }
    printf("-------------------");

    fclose(fm);
    getchar();
    system("clear");
}


