#include <stdio.h>

// Desafio Super Trunfo - Paises
// Nivel Novato: Cadastro e Comparacao Basica

int main() {
    // Definicao de variaveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Definicao de variaveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Entrada de Dados: Carta 1 ---
    printf("=== Cadastro Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrada de Dados: Carta 2 ---
    printf("\n=== Cadastro Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Exibicao dos Dados ---
    printf("\n=== Cartas Cadastradas ===\n");
    printf("Carta 1: %s (%s) - Pop: %lu, Area: %.2f, PIB: %.2f, Pts: %d\n",
           nomeCidade1, codigo1, populacao1, area1, pib1, pontosTuristicos1);
    printf("Carta 2: %s (%s) - Pop: %lu, Area: %.2f, PIB: %.2f, Pts: %d\n",
           nomeCidade2, codigo2, populacao2, area2, pib2, pontosTuristicos2);

    // --- Logica de Comparacao (Nivel Novato) ---
    // Criterio fixo: Populacao
    printf("\n=== Resultado da Comparacao (Populacao) ===\n");

    if (populacao1 > populacao2) {
        printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
    } else {
        if (populacao2 > populacao1) {
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Resultado: Empate\n");
        }
    }

    return 0;
}
