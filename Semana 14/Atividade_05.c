#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

#define COR_BRANCO  printf("\33[37m");
#define COR_ROXA    printf("\33[35m");


int main() 
{
    srand(time(NULL));
    char m[TAM][TAM],palavra1[TAM],palavra2[TAM],sort,flag = 0,cont = 0,n;
	int me[TAM][TAM] = {{0},{0}};
    int d1,d2,l,c, erro;

    d1 = rand() % TAM;
do{
     d2 = rand() % TAM;
}while(d1 == d2);



    printf("\nDigite a primeira palavara(max  4 letras): ");
    fflush(stdin);
    gets(palavra1);

    printf("Digite a segunda palavara(max  4 letras): ");
    fflush(stdin);
    gets(palavra2);

     for(l = 0;l < TAM;l++)
    {
        
        for(c = 0;c < TAM;c++)
        {
            m[l][c] = 65 + rand() % 26;
            
        }
    }
    

    for(c = 0;palavra1[c] != '\0';c++)
    {
        if(palavra1[c] >= 97 || palavra1[c] <= 122)
        {
            palavra1[c] = palavra1[c] - 32;
        }

        m[d1][c] = palavra1[c];
	me[d1][c] = 1;

        
        
    }

 for(l = 0;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
            printf("%i ",me[l][c]);
        }
    }

getchar();
getchar();

// testar
do{
	erro = 0;
    for(c = 0; palavra2[c] != '\0';c++)
    {
     
	if(me[c][d2] == 1){
		if(m[c][d2] != palavra2[c]){
			erro = 1;
			d2 = rand() % TAM;
		}
	}
        
   }
}while(erro == 1);



// preencher
    for(c = 0;palavra2[c] != '\0';c++)
    {
        if(palavra2[c] >= 97 || palavra2[c] <= 122)
        {
            palavra2[c] = palavra2[c] - 32;
        }
        m[c][d2] = palavra2[c];
        
    }

    for(l = 0;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
            printf("%c ",m[l][c]);
        }
    }

    

    





    return 0;
}