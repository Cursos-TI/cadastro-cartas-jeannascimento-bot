#include <stdio.h>

int main() {

    // VARIÁVEIS CARTA 1
    char estado1[50];
    char cidade1[30];
    char codigo1[10];
    int populacao1;
    int pontos_turisticos1;
    float area_km1;
    float pib1;

    // VARIÁVEIS CARTA 2 
    char estado2[50];
    char cidade2[30];
    char codigo2[10];
    int populacao2;
    int pontos_turisticos2;
    float area_km2;
    float pib2;

    // Área para entrada de dados

    // Carta 1
    printf("* Informacoes da Carta 1\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area_km1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // Carta 2
    printf("* Informacoes da Carta 2\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area_km2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    // Área para exibição dos dados da cidade

    // Carta 1
    printf(" *CARTA 1 \n");
    printf("Estado: %s (%s)\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area_km1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n\n", pontos_turisticos1);

    // Carta 2
    printf("  *CARTA 2 \n");
    printf("Estado: %s (%s)\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area_km2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n\n", pontos_turisticos2);

    return 0;
}