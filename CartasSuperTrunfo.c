#include <stdio.h>

int main(){;

    int nome [50];
    int turisticos;
    float pib;
    float area, populacao;

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o número de pontos turíticos: \n");
    scanf("%d", &turisticos);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Nome da cidade: %s - Número de pontos turísticos: %d\n", nome, turisticos);
    printf("PIB da cidade: %f - Área da cidade: %f - Quantidade de pessoas na cidade: %f\n", pib, area, populacao);

    return 0;
    


}