#include <stdio.h>

// Desafio Super Trunfo - Estados 
// Tema 1 - Cadastro das cartas
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

   /* Declaração das variáveis da Carta 1 */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    /* Declaração das variáveis da Carta 2 */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

  // Área para entrada de dados

printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    /* Entrada de dados da Carta 2 */
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade
  /* Exibição dos dados */
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

return 0;
} 
