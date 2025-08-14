#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     printf("Desfio Lógica Super Trunfo! \nNivel: Básico\n");
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


    char codigo_cidade1[4];
    char nome_cidade1[50];
    int populacao_cidade1;
    float area_cidade1;
    float pib_cidade1;
    int numero_pontos_Turisticos_cidade1;
    char codigo_carta1[4];

    char codigo_cidade2[4];
    char nome_cidade2[50];
    int populacao_cidade2;
    float area_cidade2;
    float pib_cidade2;
    int numero_pontos_Turisticos_cidade2;
    char codigo_carta2[4];

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)


    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" [^\n]", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao_cidade1);

    printf("Digite a area: ");
    scanf("%f", &area_cidade1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_cidade1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_Turisticos_cidade1);

    



    printf("\nCadastro da Carta 2\n");

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" [^\n]", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao_cidade2);

    printf("Digite a area: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_cidade2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_Turisticos_cidade2);


    printf("\nCarta 1\n");
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao_cidade1);
    printf("Area: %.2f \n", area_cidade1);
    printf("PIB: %.2f\n", pib_cidade1);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_Turisticos_cidade1);

    printf("\nCarta 2\n");
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao_cidade2);
    printf("Area: %.2f \n", area_cidade2);
    printf("PIB: %.2f \n", pib_cidade2);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_Turisticos_cidade2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    float densidade1 = populacao_cidade1 / area_cidade1;
    float densidade2 = populacao_cidade2 / area_cidade2;
    float pibPerCapita1 = pib_cidade1 * 1000000000 / populacao_cidade1; 
    float pibPerCapita2 = pib_cidade2 * 1000000000 / populacao_cidade2;

    // === Comparação (Atributo escolhido: População) ===
    printf("\n=== Comparacao de cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%s): %d\n", nome_cidade1, populacao_cidade1);
    printf("Carta 2 - %s (%s): %d\n", nome_cidade2, populacao_cidade2);

    if (populacao_cidade1 >populacao_cidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (populacao_cidade2 > populacao_cidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
