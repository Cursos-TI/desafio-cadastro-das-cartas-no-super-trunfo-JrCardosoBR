#include <stdio.h>
#include <string.h>  // Incluindo a biblioteca string.h para usar strcspn


int main() {

    char codigo_estado[10];
    char codigo_cidade[10];
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float pibcapita;
    float densidadep;

    printf("Digite o Código do Estado (ex: SC):\n");
    scanf(" %s", &codigo_estado);

    printf("Digite o Codigo da Cidade  (ex: SC01):\n");
    scanf(" %s", &codigo_cidade);

    printf("Digite o Nome da Cidade:\n");
    getchar(); // Limpa o buffer para evitar problemas com \n
    fgets(cidade, sizeof(cidade), stdin); // Lê o nome da cidade, incluindo espaços
    cidade[strcspn(cidade, "\n")] = 0; // Verifica se a string possui um '\n' no final e removê-lo

    printf("Digite o Numero da Area da Cidade:\n");
    scanf("%f", &area);

    printf("Digite o Numero Populacional da Cidade:\n");
    scanf(" %f", &populacao);
    
    printf("Digite o Numero de Pontos Turísticos da Cidade:\n");
    scanf(" %d", &pontos_turisticos);

    printf("Digite o Numero do PIB da Cidade:\n");
    scanf(" %f", &pib);

    // Calculando PIB per capita e densidade populacional
    pibcapita = pib / populacao;
    densidadep = populacao / area;

    printf("               V-V Carta Gerada Com Sucesso! V-V                   \n");
    printf("|-----------------------------------------------------------------|\n");
    printf("              Codigo do Estado: %s                                 \n", codigo_estado);
    printf("              Codigo da Cidade: %s                                 \n", codigo_cidade);
    printf("              Nome da Cidade: %s                                   \n", cidade);
    printf("              Área da Cidade: %.3f km²                             \n", area);
    printf("              Popução da Cidade: %.3f Habitantes                   \n", populacao);
    printf("              Pontos Turísticos da Cidade: %d                      \n", pontos_turisticos);
    printf("              PIB da Cidade: %.3f Milhôes                          \n", pib);
    printf("              PIB per Capita da Cidade: %.3f Mil                   \n", pibcapita);
    printf("              Densidade Populacional da Cidade: %.3f hab./km2        \n", densidadep);
    printf("|-----------------------------------------------------------------|\n");



    return 0;
}
