#include <stdio.h>

// Estrutura para armazenar os dados de uma carta do Super Trunfo
struct Carta {
    char estado;                   // Letra de A a H representando o estado
    char codigo[4];                // Código da carta, como A01, B02
    char nomeCidade[100];         // Nome da cidade
    int populacao;                // Número de habitantes
    float area;                   // Área em km²
    float pib;                    // PIB em bilhões de reais
    int pontosTuristicos;        // Número de pontos turísticos
    float densidadePopulacional;  // Habitantes por km²
    float pibPerCapita;           // PIB por pessoa (em reais)
};

int main() {
    // Declaração das duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Instruções para o usuário - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Permite leitura com espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos para carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;

    // Instruções para o usuário - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos para carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição dos dados da primeira carta
    printf(
        "\n=== Carta 1 ===\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n",
        carta1.estado,
        carta1.codigo,
        carta1.nomeCidade,
        carta1.populacao,
        carta1.area,
        carta1.pib,
        carta1.pontosTuristicos,
        carta1.densidadePopulacional,
        carta1.pibPerCapita
    );

    // Exibição dos dados da segunda carta
    printf(
        "\n=== Carta 2 ===\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n",
        carta2.estado,
        carta2.codigo,
        carta2.nomeCidade,
        carta2.populacao,
        carta2.area,
        carta2.pib,
        carta2.pontosTuristicos,
        carta2.densidadePopulacional,
        carta2.pibPerCapita
    );

    return 0;
}
