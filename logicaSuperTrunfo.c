#include <stdio.h>

// Desafio Super Trunfo - Paises
// Nivel Mestre: Comparacao de Dois Atributos com Logica Ternaria

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

    int opcao1, opcao2;
    float valorCarta1_Atributo1, valorCarta1_Atributo2, somaCarta1;
    float valorCarta2_Atributo1, valorCarta2_Atributo2, somaCarta2;

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

    // --- Menu Interativo (Nivel Mestre) ---
    printf("\n=== Escolha o Primeiro Atributo ===\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional (Inverso: Menor vence)\n");
    printf("Opcao 1: ");
    scanf("%d", &opcao1);

    printf("\n=== Escolha o Segundo Atributo ===\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional (Inverso: Menor vence)\n");
    printf("Opcao 2: ");
    scanf("%d", &opcao2);

    // Logica de Selecao dos Valores para Carta 1
    switch (opcao1) {
        case 1: valorCarta1_Atributo1 = (float)populacao1; break;
        case 2: valorCarta1_Atributo1 = area1; break;
        case 3: valorCarta1_Atributo1 = pib1; break;
        case 4: valorCarta1_Atributo1 = (float)pontosTuristicos1; break;
        case 5: valorCarta1_Atributo1 = (densidadePopulacional1 > 0) ? (1.0f / densidadePopulacional1) : 0; break; // Inverso para somar corretamente (menor densidade = maior pontuacao)
        default: valorCarta1_Atributo1 = 0; printf("Opcao 1 invalida!\n");
    }

    switch (opcao2) {
        case 1: valorCarta1_Atributo2 = (float)populacao1; break;
        case 2: valorCarta1_Atributo2 = area1; break;
        case 3: valorCarta1_Atributo2 = pib1; break;
        case 4: valorCarta1_Atributo2 = (float)pontosTuristicos1; break;
        case 5: valorCarta1_Atributo2 = (densidadePopulacional1 > 0) ? (1.0f / densidadePopulacional1) : 0; break;
        default: valorCarta1_Atributo2 = 0; printf("Opcao 2 invalida!\n");
    }

    // Logica de Selecao dos Valores para Carta 2
    switch (opcao1) {
        case 1: valorCarta2_Atributo1 = (float)populacao2; break;
        case 2: valorCarta2_Atributo1 = area2; break;
        case 3: valorCarta2_Atributo1 = pib2; break;
        case 4: valorCarta2_Atributo1 = (float)pontosTuristicos2; break;
        case 5: valorCarta2_Atributo1 = (densidadePopulacional2 > 0) ? (1.0f / densidadePopulacional2) : 0; break;
        default: valorCarta2_Atributo1 = 0;
    }

    switch (opcao2) {
        case 1: valorCarta2_Atributo2 = (float)populacao2; break;
        case 2: valorCarta2_Atributo2 = area2; break;
        case 3: valorCarta2_Atributo2 = pib2; break;
        case 4: valorCarta2_Atributo2 = (float)pontosTuristicos2; break;
        case 5: valorCarta2_Atributo2 = (densidadePopulacional2 > 0) ? (1.0f / densidadePopulacional2) : 0; break;
        default: valorCarta2_Atributo2 = 0;
    }

    // Soma dos Atributos
    somaCarta1 = valorCarta1_Atributo1 + valorCarta1_Atributo2;
    somaCarta2 = valorCarta2_Atributo1 + valorCarta2_Atributo2;

    // Exibicao dos Resultados
    printf("\n=== Resultado da Comparacao (Soma de Atributos) ===\n");
    printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", nomeCidade1, valorCarta1_Atributo1, valorCarta1_Atributo2, somaCarta1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", nomeCidade2, valorCarta2_Atributo1, valorCarta2_Atributo2, somaCarta2);

    // Decisao com Operador Ternario
    printf("\n%s\n", (somaCarta1 > somaCarta2) ? "Vencedor: Carta 1" :
                     (somaCarta2 > somaCarta1) ? "Vencedor: Carta 2" : "Resultado: Empate");

    return 0;
}
