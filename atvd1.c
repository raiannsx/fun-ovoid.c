#include<stdio.h>

    int main()
    {
    int idade[5];
    float altura[5];
    float peso[5];
    char nome [5];
    float alturaMax = 0, alturaMin = 999, pesoMax = 0, pesoMin = 999;
    int idadeMax = 0, idadeMin = 999;
    int i;


    for( i = 0; i < 5; i++)
    {
        printf("\nInsira o nome da pessoa%d: ", i + 1);
        scanf("%s", &nome[i]);
    
        printf("\nInsira o idade da pessoa%d: ", i + 1);
        scanf("%d", &idade[i]);    

        printf("\nInsira o altura da pessoa%d: ", i + 1);
        scanf("%f", &altura[i])

        printf("\nInsira o peso da pessoa%d: ", i + 1);
        scanf("%f", &peso[i])

          if (pessoa.altura > alturaMax) {
            alturaMax = pessoa.altura;
            maisAlta = pessoa;
        }
        if (pessoa.altura < alturaMin) {
            alturaMin = pessoa.altura;
            maisBaixa = pessoa;
        }
        if (pessoa.peso > pesoMax) {
            pesoMax = pessoa.peso;
            maisPesada = pessoa;
        }
        if (pessoa.peso < pesoMin) {
            pesoMin = pessoa.peso;
            maisLeve = pessoa;
        }
        if (pessoa.idade > idadeMax) {
            idadeMax = pessoa.idade;
            maisVelha = pessoa;
        }
        if (pessoa.idade < idadeMin) {
            idadeMin = pessoa.idade;
            maisNova = pessoa;
        }
    }

    printf("\ninformaçoes:");

    printf("\n\nPessoa mais alta: %s, Altura: %.2f",maisAlta.nome, maisAlta.altura);
    printf("\nPessoa mais baixa: %s, Altura: %.2f", maisBaixa.nome, maisBaixa.altura);

    printf("\n\nPessoa mais pesada: %s, Peso: %.2f", maisPesada.nome, maisPesada.peso);
    printf("\nPessoa mais leve: %s, Peso: %.2f", maisLeve.nome, maisLeve.peso);

    printf("\n\nPessoa mais velha: %s, Idade: %d", maisVelha.nome, maisVelha.idade);
    printf("\nPessoa mais nova: %s, Idade: %d\n", maisNova.nome, maisNova.idade);
    return 0;
    }