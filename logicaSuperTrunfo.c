#include <stdio.h>

// Desafio Super Trunfo - Paises
// Nivel Aventureiro: Menu Interativo e Comparacao Aninhada

int main() {
    // Definicao de variaveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;

    // Definicao de variaveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;

    int opcao; // Variavel para o menu interativo

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

    if (area1 > 0) densidadePopulacional1 = (float)populacao1 / area1;
    else densidadePopulacional1 = 0;

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

    if (area2 > 0) densidadePopulacional2 = (float)populacao2 / area2;
    else densidadePopulacional2 = 0;

    // --- Menu Interativo (Nivel Aventureiro) ---
    printf("\n=== Escolha o Atributo para Comparacao ===\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional (Menor vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparacao ===\n");
    printf("Carta 1: %s (%s)\n", nomeCidade1, codigo1);
    printf("Carta 2: %s (%s)\n", nomeCidade2, codigo2);

    switch (opcao) {
        case 1: // Populacao
            printf("Atributo: Populacao\n");
            printf("Valor Carta 1: %lu | Valor Carta 2: %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: Carta 1\n");
            } else if (populacao2 > populacao1) {
                printf("Vencedor: Carta 2\n");
            } else {
                printf("Resultado: Empate\n");
            }
            break;

        case 2: // Area
            printf("Atributo: Area\n");
            printf("Valor Carta 1: %.2f | Valor Carta 2: %.2f\n", area1, area2);
            if (area1 > area2) {
                printf("Vencedor: Carta 1\n");
            } else if (area2 > area1) {
                printf("Vencedor: Carta 2\n");
            } else {
                printf("Resultado: Empate\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Valor Carta 1: %.2f | Valor Carta 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: Carta 1\n");
            } else if (pib2 > pib1) {
                printf("Vencedor: Carta 2\n");
            } else {
                printf("Resultado: Empate\n");
            }
            break;

        case 4: // Pontos Turisticos
            printf("Atributo: Pontos Turisticos\n");
            printf("Valor Carta 1: %d | Valor Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: Carta 1\n");
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: Carta 2\n");
            } else {
                printf("Resultado: Empate\n");
            }
            break;

        case 5: // Densidade Populacional (Menor vence)
            printf("Atributo: Densidade Populacional\n");
            printf("Valor Carta 1: %.2f | Valor Carta 2: %.2f\n", densidadePopulacional1, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: Carta 1 (Menor densidade vence)\n");
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: Carta 2 (Menor densidade vence)\n");
            } else {
                printf("Resultado: Empate\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
