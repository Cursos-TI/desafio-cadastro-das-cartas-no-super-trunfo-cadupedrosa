#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1, codigocarta1[50],nomeCidade1[50];
    int populacao1, pontosturistico1;
    float area1, pib1, densidadepop1, pibpercapita1;

    char estado2, codigocarta2[50],nomeCidade2[50];
    int populacao2, pontosturistico2;
    float area2, pib2, densidadepop2, pibpercapita2;

    printf("Digite o estado da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturistico1);

    //carta 2
    printf("Digite o estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturistico2);

    // Calculo Nivel Aventureiro CARTA 1 E 2
    densidadepop1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidadepop2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    //carta 1
    printf("\nCarta 1:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f Km\n PIB: %f\n Números de pontos turísticos: %d\n Densidade Populacional: %.2f\n PIB per capita: %.2f", estado1, codigocarta1, nomeCidade1, populacao1, area1, pib1, pontosturistico1, densidadepop1,pibpercapita1);

    //carta 2
     printf("\nCarta 2:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f Km\n PIB: %f\n Números de pontos turísticos: %d\n Densidade Populacional: %.2f\n PIB per capita: %.2f", estado2, codigocarta2, nomeCidade2, populacao2, area2, pib2, pontosturistico2, densidadepop2, pibpercapita2);

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
