#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void cabecario()
{
    printf("\n===============================\n");
    printf("\PAR OU IMPAR");
    printf("\n================================\n");
}

void limpaTela()
{
    fflush(stdin);
    system("cls || clear");
}

void velificadorDenumeros(int numero[])
{
    int i;
    int pares=0;
    int impares=0;

    for (i = 0; i < TAM; i++)
    {
        if (numero[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    printf("Os Numeros Pares:%d \n", pares);
    printf("Os Numeros Imapres:%d \n", impares);
}
int main() {
    setlocale(LC_ALL, "");
    int numero[TAM], i;
    

    for ( i = 0; i < TAM; i++)
    {
    printf("Digite um Numero:");
    scanf("%d", &numero[i]);
        
    }
    
    cabecario(); // Chamada da função.

    velificadorDenumeros(numero);

    return 0;
}