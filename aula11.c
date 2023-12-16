#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i;
    int numero;
    int qunantidade = 0;
    int pares;
    int impar;

    printf("Informe a quantidade:\n");
    scanf("%d", &qunantidade);

    for (i = 0; i < qunantidade; i++)
    {
        printf("Digite o Numero:");
        scanf("%d", &numero);
    }
    fflush(stdin);
    if (numero % 2 == 0)
    {
        pares++;
    }
    else
    {
        impar++;
    }

    fflush(stdin);

    printf("Os PARES: %d", pares);
    printf("Os IMPARES: %d", impar);

    return 0;
}
