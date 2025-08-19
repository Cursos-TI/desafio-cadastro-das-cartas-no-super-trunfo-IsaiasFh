#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    unsigned long int populacao; // para números grandes
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

float calcular_super_poder(Carta c) {
    // Inverso da densidade populacional: se for zero, evitar divisão por zero
    float inverso_densidade = (c.densidade_populacional != 0) ? (1.0 / c.densidade_populacional) : 0;
    return (float)c.populacao + c.area + c.pib + c.pontos_turisticos + c.pib_per_capita + inverso_densidade;
}

int main() {
    Carta carta1, carta2;

    // Leitura Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Digite o código da Carta 1: ");
    scanf(" %[^\n]", carta1.codigo);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Digite a população da Carta 1: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área da Carta 1: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Leitura Carta 2
    printf("Digite o estado da Carta 2: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Digite o código da Carta 2: ");
    scanf(" %[^\n]", carta2.codigo);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área da Carta 2: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta2.densidade_populacional = carta2.populacao / carta2.area;

    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    carta1.super_poder = calcular_super_poder(carta1);
    carta2.super_poder = calcular_super_poder(carta2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade_populacional < carta2.densidade_populacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
