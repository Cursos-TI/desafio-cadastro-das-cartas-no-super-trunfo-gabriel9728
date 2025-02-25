#include <stdio.h>

// Definindo uma estrutura para a carta
typedef struct {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    // Criando duas variáveis do tipo Carta
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Digite a população da primeira carta: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área da primeira carta: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da segunda carta
    printf("\nDigite o código da segunda carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Digite a população da segunda carta: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área da segunda carta: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo os dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibindo os dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
