#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cadastro da primeira carta
    printf("Digite o estado da primeira carta (ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda carta (ex: B): ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
