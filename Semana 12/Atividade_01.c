#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(){
    
    // Variaveis de Inicio
    char palavra[30], dica_01[30], dica_02[30], letra[3], palavra_teste[30];
    
    int a, total_erros = 0, dicas_disp = 2, maximo_de_erros = 7;

    int opcao, saida,tamanho_palavra = 0, total_dicas_usadas = 0;

    int count_palavra = 0, acertos, resultado;

    int flag = 1, flag_02, y;

    char palavra_mostra[30];

    int num;

    // Pegando Info Init
    printf("\nPalavra: ");
    gets(palavra);

    printf("1 Dica: ");
    gets(dica_01);

    printf("2 Dica: ");
    gets(dica_02);

    for(a = 0; palavra[a] != '\0'; a++){
        palavra_mostra[a] = palavra[a];
        tamanho_palavra++;
    //    printf("%c" ,palavra_mostra[a]);
    }

    for(a = 0; palavra[a] != '\0'; a++){
            palavra_mostra[a] = 95;
    }

    acertos = 0;

    system("cls");
    //Setup Inicio
    while(total_erros != maximo_de_erros){

           if(total_dicas_usadas == 2){
               dicas_disp = 0;
           }


        printf("\n---------------------------------------------------------------------------------" );
        printf("\n---------------------------------------------------------------------------------" );
        printf("\n---------------------------------------------------------------------------------" );
        printf("\n---------------------- TOTAL DE ERROS: %i | DICAS DISPONIVEIS: %i -----------------", total_erros, dicas_disp);
        printf("\n---------------------------------------------------------------------------------" );
        

        if(total_dicas_usadas == 1){
            printf("\n ---------------- 1 Dica: [%s] ", dica_01);
        }

        if(total_dicas_usadas == 2){
            printf("\n---------------- 1 Dica: [%s] ", dica_01);
            printf("\n---------------- 2 Dica: [%s] ", dica_02);
            dicas_disp= 0;
        }
        if(total_dicas_usadas > 2){
            printf("\n---------------- 1 Dica: [%s] ", dica_01);
            printf("\n---------------- 2 Dica: [%s] ", dica_02);
        }

        printf("\n------- PALAVRA: ");

        

        for(a = 0; palavra[a] != '\0'; a++){
            if(letra[0] == palavra[a]){
                palavra_mostra[a] = letra[0];
                acertos++;
            }
            printf("%c" ,palavra_mostra[a]);
            printf(" ");
        }
            if(acertos == tamanho_palavra){
            resultado = 1;
            break;
            }
        

        printf("\n---------------------------------------------------------------------------------" );
        printf("\n---------------------------------------------------------------------------------" );
        printf("\n--------- 1) EFETUAR JOGADA -----------------------------------------------------" );
        printf("\n--------- 2) SOLICITAR DICA -----------------------------------------------------" );
        printf("\n--------- 3) ADIVINHAR PALAVRA --------------------------------------------------" );
        printf("\n--------- 4) VISUALIZAR FORCA ---------------------------------------------------" );
        printf("\n---------------------------------------------------------------------------------" );


        printf("\nESCOLHA: ");
        scanf("%i", &num);

        // Parte caso ele queira digitar uma letra
        if(num == 1){
            count_palavra = 0;
            fflush(stdin);
            printf("Digite uma letra (a - z): ");
            gets(letra);
            for(a=0; palavra[a] != '\0'; a++){
                if(letra[0] == palavra[a]){
                    count_palavra++;
                }
            }
            if(count_palavra == 0){
                total_erros++;
            }
            if(total_erros == maximo_de_erros){
                resultado = 0;
                break;
            }
        }

        // Parte em que o jogador solicita uma dica
        if(num == 2){


            total_dicas_usadas++;

            if(total_dicas_usadas < 2){
                dicas_disp = dicas_disp -1;
                flag = 0;
            }
            else{

            }
            
        }

        // Parte em que o jogador solicita uma palavra para arriscar
        if(num == 3){

            fflush(stdin);
            printf("Digite a palavra: ");
            gets(palavra_teste);

            while(palavra_teste[a] == palavra[a]){

                if(palavra[a] == '\0' || palavra_teste == '\0'){
                    break;
                }

                a++;
            }

            if(palavra[a] == '\0' && palavra_teste[a] == '\0'){
                resultado = 1;
                break;
                }
            else{
                resultado = 0;
                break;
                }
        }

        // Parte que o jogador solicita para visualizar a forca
        if(num == 4){
            if(total_erros == 0){
                printf("---|");
            }
            if(total_erros == 1){
                printf("---|");
                printf("\n   O");
            }
            if(total_erros == 2){
                printf("---|");
                printf("\n   O");
                printf("\n  /");
            }
            if(total_erros == 3){
                printf("---|");
                printf("\n   O");
                printf("\n  /I");
            }
            if(total_erros == 4){
                printf("---|");
                printf("\n   O");
                printf("\n  /I\\");
            }
            if(total_erros == 5){
                printf("---|");
                printf("\n   O");
                printf("\n  /I\\");
                printf("\n   I");
            }
            if(total_erros == 6){
                printf("---|");
                printf("\n   O");
                printf("\n  /I\\");
                printf("\n   I");
                printf("\n  /");
            }
            if(total_erros == 7){
                printf("---|");
                printf("\n   O");
                printf("\n  /I\\");
                printf("\n   I");
                printf("\n  / \\");
            }

            Sleep(3000);
        }

        system("cls");

    }



    // Finalizando O Game

    system("cls");
    

    if(total_dicas_usadas == 2){
            dicas_disp = 0;
           }

        printf("\n---------------------------------------------------------------------------------" );
        printf("\n---------------------------------------------------------------------------------" );
        printf("\n---------------------------------------------------------------------------------" );
        printf("\n---------------------- TOTAL DE ERROS: %i | DICAS DISPONIVEIS: %i -----------------", total_erros, dicas_disp);
        printf("\n---------------------------------------------------------------------------------" );
        

        if(total_dicas_usadas == 1){
            printf("\n ---------------- 1 Dica: [%s] ", dica_01);
        }

        if(total_dicas_usadas == 2){
            printf("\n---------------- 1 Dica: [%s] ", dica_01);
            printf("\n---------------- 2 Dica: [%s] ", dica_02);
            dicas_disp= 0;
        }
        if(total_dicas_usadas > 2){
            printf("\n---------------- 1 Dica: [%s] ", dica_01);
            printf("\n---------------- 2 Dica: [%s] ", dica_02);
        }

        printf("\n------- PALAVRA: ");

        for(a=0; palavra[a] != '\0'; a++){
            
            printf(" %c ", palavra[a]);

        }
        // Mostra caso a pessoa ganhe
        if(resultado == 1){
            printf("\n---------------------------------------------------------------------------------" );
            printf("\n---------------------------------------------------------------------------------" );
            printf("\n--------- 1) EFETUAR JOGADA -----------------------------------------------------" );
            printf("\n--------- 2) SOLICITAR DICA -----------------------------------------------------" );
            printf("\n--------- 3) ADIVINHAR PALAVRA --------------------------------------------------" );
            printf("\n--------- 4) VISUALIZAR FORCA ---------------------------------------------------" );
            printf("\n---------------------------------------------------------------------------------" );
            printf("\n--------------------------VOCE GANHOU! ------------------------------------------" );
        }

        // Mostra a parte em que perdeu
        else if(resultado == 0){
            printf("\n---------------------------------------------------------------------------------" );
            printf("\n---------------------------------------------------------------------------------" );
            printf("\n--------- 1) EFETUAR JOGADA -----------------------------------------------------" );
            printf("\n--------- 2) SOLICITAR DICA -----------------------------------------------------" );
            printf("\n--------- 3) ADIVINHAR PALAVRA --------------------------------------------------" );
            printf("\n--------- 4) VISUALIZAR FORCA ---------------------------------------------------" );
            printf("\n---------------------------------------------------------------------------------" );
            printf("\n--------------------------VOCE PERDEU! ------------------------------------------" );
        }
    
        
}






