 #include <stdio.h>
 #include <stdlib.h>

double fatorial(int vfat);

double mPrimo(int mprimo);
 
 int main(){
    
    int fat, maiorPrimo, i;
    int valorfat, valorMaiorPrimo;
    int valortotal;

    printf("Fatorial: ");
    scanf("%i", &fat);
    printf("Maior primo: ");
    scanf("%i", &maiorPrimo);

    valorMaiorPrimo = mPrimo(maiorPrimo);

    valorfat = fatorial(fat);

    valortotal = valorfat * valorMaiorPrimo;

    printf("- Resultado: %i x %i = %i",valorfat, valorMaiorPrimo, valortotal);
 }

 double fatorial(int vfat){
    int fac, i;
    fac = vfat;
    i = vfat;
    
    for(i;i > 1;i--){
        fac = fac * (i - 1);     
    }
    return fac;
 }

 double mPrimo(int mprimo){
    int ini = mprimo;
    int fim = 2;
    int cont, div;
     while(ini > fim) {
        cont = 0;
        div = 2;
        while(div <= ini) { 
            if(ini % div == 0) {
                cont++;
            }
            div++; // div = div + 1;
        }

        if(cont == 1){
            return ini;
        }

        ini--;
    }
}
 