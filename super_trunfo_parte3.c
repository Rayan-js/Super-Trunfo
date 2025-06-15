#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4]; // A01, B02, etc. (3 caracteres + terminador nulo)
    char nome_cidade1[50];
    unsigned long int populacao1; // Modificado para unsigned long int
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;
    
    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2; // Modificado para unsigned long int
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;
    
    // Variáveis para armazenar os resultados das comparações
    int comp_populacao;
    int comp_area;
    int comp_pib;
    int comp_pontos_turisticos;
    int comp_densidade_populacional;
    int comp_pib_per_capita;
    int comp_super_poder;
    
    // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1); // Permite nomes com espaços
    
    printf("Digite a população (número de habitantes): ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Leitura dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Digite a população (número de habitantes): ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1; // Convertendo bilhões para unidades
    
    // Cálculo da densidade populacional e PIB per capita para Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2; // Convertendo bilhões para unidades
    
    // Cálculo do Super Poder para cada carta
    // O super poder é a soma de todos os atributos numéricos, incluindo o inverso da densidade populacional
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + (float)pontos_turisticos1 + 
                   pib_per_capita1 + (1.0f / densidade_populacional1 * 1000000.0f); // Fator de escala para o inverso da densidade
    
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + (float)pontos_turisticos2 + 
                   pib_per_capita2 + (1.0f / densidade_populacional2 * 1000000.0f); // Fator de escala para o inverso da densidade
    
    // Exibição dos dados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Exibição dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Comparação dos atributos
    comp_populacao = populacao1 > populacao2;
    comp_area = area1 > area2;
    comp_pib = pib1 > pib2;
    comp_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    comp_densidade_populacional = densidade_populacional1 < densidade_populacional2; // Para densidade, menor é melhor
    comp_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    comp_super_poder = super_poder1 > super_poder2;
    
    // Exibição dos resultados das comparações
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta %d venceu (%d)\n", comp_populacao ? 1 : 2, comp_populacao);
    printf("Área: Carta %d venceu (%d)\n", comp_area ? 1 : 2, comp_area);
    printf("PIB: Carta %d venceu (%d)\n", comp_pib ? 1 : 2, comp_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", comp_pontos_turisticos ? 1 : 2, comp_pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", comp_densidade_populacional ? 1 : 2, comp_densidade_populacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", comp_pib_per_capita ? 1 : 2, comp_pib_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", comp_super_poder ? 1 : 2, comp_super_poder);
    
    return 0;
}