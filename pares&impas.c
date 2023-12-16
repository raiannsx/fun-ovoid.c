#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i;
    int pares = 0;
    int impares = 0;
    int numero = 0;

    for (i = 0; i < 10; i++) {
        printf("Incira Um numero:\n");
        scanf("%d", &numero);
    }

    if (numero % 2 == 0)
    {
        pares++;
    }
    else
    {
        impares++;
    }

    printf("Os Numeros Pares:%d \n", pares);
    printf("Os Numeros Imapres:%d \n", impares);

    return 0;
}
