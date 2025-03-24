#include <stdio.h>

int main() {
    // Variáveis para os dados das cartas
    unsigned long int populacao1, populacao2; 
    float area1, area2, pib1, pib2, pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados para a carta 1
    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1 (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%f", &pontosTuristicos1);

    // Entrada de dados para a carta 2
    printf("\nDigite a população da carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2 (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%f", &pontosTuristicos2);

    // Cálculos da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1; 
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    densidade2 = populacao2 / area2; 
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Cálculos do Super Poder para cada carta
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + (1 / densidade1) + pibPerCapita1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / densidade2) + pibPerCapita2;

    // Comparando as cartas por atributo e imprimindo o vencedor
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 > densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
