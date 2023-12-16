#include <stdio.h>
#include <string.h>

int main() {
    struct Pessoa {
        char nome[50];
        int idade;
        float altura;
        float peso;
    };

    struct Pessoa pessoas[5];
    struct Pessoa maisAlta, maisBaixa, maisPesada, maisLeve, maisVelha, maisNova;

    float alturaMax = 0, alturaMin = 999, pesoMax = 0, pesoMin = 999;
    int idadeMax = 0, idadeMin = 999;

    for (int i = 0; i < 5; i++) {
        printf("\nInsira o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Insira a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);

        printf("Insira a altura da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].altura);

        printf("Insira o peso da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].peso);

        // Encontrando a pessoa mais alta, mais baixa, mais pesada, mais leve, mais velha e mais nova
        if (pessoas[i].altura > alturaMax) {
            alturaMax = pessoas[i].altura;
            maisAlta = pessoas[i];
        }
        if (pessoas[i].altura < alturaMin) {
            alturaMin = pessoas[i].altura;
            maisBaixa = pessoas[i];
        }
        if (pessoas[i].peso > pesoMax) {
            pesoMax = pessoas[i].peso;
            maisPesada = pessoas[i];
        }
        if (pessoas[i].peso < pesoMin) {
            pesoMin = pessoas[i].peso;
            maisLeve = pessoas[i];
        }
        if (pessoas[i].idade > idadeMax) {
            idadeMax = pessoas[i].idade;
            maisVelha = pessoas[i];
        }
        if (pessoas[i].idade < idadeMin) {
            idadeMin = pessoas[i].idade;
            maisNova = pessoas[i];
        }
    }

    printf("\nInformações:");

    printf("\n\nPessoa mais alta: %s, Altura: %.2f", maisAlta.nome, maisAlta.altura);
    printf("\nPessoa mais baixa: %s, Altura: %.2f", maisBaixa.nome, maisBaixa.altura);

    printf("\n\nPessoa mais pesada: %s, Peso: %.2f", maisPesada.nome, maisPesada.peso);
    printf("\nPessoa mais leve: %s, Peso: %.2f", maisLeve.nome, maisLeve.peso);

    printf("\n\nPessoa mais velha: %s, Idade: %d", maisVelha.nome, maisVelha.idade);
    printf("\nPessoa mais nova: %s, Idade: %d\n", maisNova.nome, maisNova.idade);

    return 0;
}

