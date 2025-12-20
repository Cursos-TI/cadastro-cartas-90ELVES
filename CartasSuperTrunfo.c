#include <stdio.h>

// Desafio Super Trunfo - Estados 
// Tema 1 - Cadastro das cartas
// Tema 2 - Calculando Densidade Populacional e PIB per Capita
// Tema 3 - Batalha de Cartas no Super Trunfo
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
/*Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30     
*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    /* ===== CARTA 1 ===== */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    /* ===== CARTA 2 ===== */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    /* ===== ENTRADA CARTA 1 ===== */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    /* ===== ENTRADA CARTA 2 ===== */
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf( "%[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    /* ===== CALCULOS ===== */

    /* Densidade Populacional */
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    /* PIB per Capita */
    pibPerCapita1 = pib1 / (float)populacao1;
    pibPerCapita2 = pib2 / (float)populacao2;


    /* Área para exibição dos dados da cidade
    Exibição dos dados 
    printf("\n==============================\n");
    printf("       CARTA 1\n");
    printf("==============================\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
    printf("PIB per Capita:  %.2f\n", pibPerCapita1);
 
    printf("\n==============================\n");
    printf("       CARTA 2\n");
    printf("==============================\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f  bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade2);
    printf("PIB per Capita:  %.2f\n", pibPerCapita2);

   */

    /* Super Poder */
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontos1 + pibPerCapita1 + (1.0f / densidade1);

    superPoder2 = (float)populacao2 + area2 + pib2 +  (float)pontos2 + pibPerCapita2 + (1.0f / densidade2);

    /* ===== COMPARACOES ===== */
    int vPopulacao     = (populacao1 > populacao2);
    int vArea          = (area1 > area2);
    int vPIB           = (pib1 > pib2);
    int vPontos        = (pontos1 > pontos2);
    int vDensidade     = (densidade1 < densidade2); /* menor vence */
    int vPibPerCapita  = (pibPerCapita1 > pibPerCapita2);
    int vSuperPoder    = (superPoder1 > superPoder2);

    /* ===== SAIDA ===== */
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", vPopulacao);
    printf("Area: Carta 1 venceu (%d)\n", vArea);
    printf("PIB: Carta 1 venceu (%d)\n", vPIB);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", vPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vSuperPoder);

    return 0;
}
