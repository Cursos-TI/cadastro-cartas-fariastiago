#include <stdio.h>

int main(){

    // Área para definição das variáveis para armazenar as propriedades das cidades
    int populacao, pontos;
    float area, PIB;
    char estado, codigo[3], cidade[20];
    float densidade, pib_per_capita;

    // Área para entrada de dados - Carta 1
    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    // cálculos
    densidade = populacao / area;
    pib_per_capita = PIB / populacao;

    // Área para exibição dos dados da cidade - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", pontos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);



    // Área para entrada de dados - Carta 2
    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    // cálculos
    densidade = populacao / area;
    pib_per_capita = PIB / populacao;
    
    // Área para exibição dos dados da cidade - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", pontos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);
    
    return 0;
}