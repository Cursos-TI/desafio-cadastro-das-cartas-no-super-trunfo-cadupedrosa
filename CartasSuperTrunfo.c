#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Desafio Super Trunfo - Países
int main() {

    // atributos carta 1
    char estado1, codigocarta1[50], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosturistico1;
    float area1, pib1, densidadepop1, pibpercapita1, superpoder1;

    // atributos carta 2
    char estado2, codigocarta2[50], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosturistico2;
    float area2, pib2, densidadepop2, pibpercapita2, superpoder2;

    // Cadastro carta 1
    printf("Digite o estado da primeira carta: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta: \n");
    scanf("%s", codigocarta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);
    printf("Digite a população: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturistico1);

    // Cadastro carta 2
    printf("Digite o estado da segunda carta: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta: \n");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);
    printf("Digite a população: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturistico2);

    // cálculos (nível aventureiro)
    densidadepop1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    densidadepop2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // superpoder (nível mestre)
    superpoder1 = populacao1 + area1 + pib1 + pontosturistico1 + pibpercapita1 + (1.0/densidadepop1);
    superpoder2 = populacao2 + area2 + pib2 + pontosturistico2 + pibpercapita2 + (1.0/densidadepop2);

    // exibição das cartas
    printf("\nCarta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %lu\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n",
           estado1, codigocarta1, nomeCidade1, populacao1, area1, pib1, pontosturistico1, densidadepop1, pibpercapita1);

    printf("\nCarta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %lu\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n",
           estado2, codigocarta2, nomeCidade2, populacao2, area2, pib2, pontosturistico2, densidadepop2, pibpercapita2);

    // comparações (1 ou 0)
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosturistico1 > pontosturistico2);
    printf("PIB per Capita: %d\n", pibpercapita1 > pibpercapita2);
    printf("Densidade Populacional: %d\n", densidadepop1 < densidadepop2); // menor vence
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    return 0;
}
