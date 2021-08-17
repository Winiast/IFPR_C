#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c, d;
    a = 5;
    d = 10;
    b = (2 * a) + (d * d);
    c = (d * d) / b;
    printf("> Valor de (a) = %i\n", a);
    printf("> Valor de (b) = %i\n", b);
    printf("> Valor de (c) = %i\n", c);
    printf("> Valor de (d) = %i\n", d);
}