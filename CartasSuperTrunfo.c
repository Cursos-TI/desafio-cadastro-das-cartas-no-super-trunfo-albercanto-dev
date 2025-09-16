#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[100], nomeCidade2[100];
    int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoderCidade1, superPoderCidade2;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Matecheck - Super Trunfo - Países / Cadastro de Cartas \n \n");
    
    //Cadastro da Primeira Carta
    printf("Cadastro da Primeira Carta \n \n");

    printf("Informe o Estado da carta: ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta: ");
    scanf("%s", codigoCarta1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe o valor da população: ");
    scanf("%d", &populacaoCidade1);

    printf("Informe a àrea da cidade: ");
    scanf("%f", &areaCidade1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibCidade1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n \n"); //Comando utilizado apenas para pular duas linhas e melhorar a visualização

    //Cadastro da Segunda Carta
    printf("Cadastro da Segunda Carta \n \n");

    printf("Informe o Estado da carta: ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe o valor da população: ");
    scanf("%d", &populacaoCidade2);

    printf("Informe a àrea da cidade: ");
    scanf("%f", &areaCidade2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibCidade2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //calculo da densidade populacional e do pibpercapta
    densidadePopulacional1 = (float) populacaoCidade1 / areaCidade1;
    densidadePopulacional2 = (float) populacaoCidade2 / areaCidade2;
    
    pibPerCapita1 = (float) (pibCidade1 * 1000000000) / populacaoCidade1;
    pibPerCapita2 = (float) (pibCidade2 * 1000000000) / populacaoCidade2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n \n"); //Comando utilizado apenas para pular duas linhas e melhorar a visualização
    
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código da carta: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacaoCidade1);
    printf("Área: %.2f Km² \n", areaCidade1);
    printf("PIB: %.2f bilhões de reais \n", pibCidade1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais", pibPerCapita1);

    printf("\n \n"); //Comando utilizado apenas para pular duas linhas e melhorar a visualização

    // Informações da Segunda Carta
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacaoCidade2);
    printf("Área: %.2f Km² \n", areaCidade2);
    printf("PIB: %.2f bilhões de reais \n", pibCidade2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapita2);


    // calculo do superPoder.
    superPoderCidade1 = (float) populacaoCidade1 + areaCidade1 + pibCidade1 + (float) pontosTuristicos1 + (1/densidadePopulacional1) + pibPerCapita1;
    superPoderCidade2 = (float) populacaoCidade2 + areaCidade2 + pibCidade2 + (float) pontosTuristicos2 + (1/densidadePopulacional2) + pibPerCapita2;
    
    printf("\n \n"); //Comando utilizado apenas para pular duas linhas e melhorar a visualização
    
    // Comparação das cartas
    printf("Comparação das Cartas, Legenda: 1 = %s venceu, 0 - %s venceu! \n \n", nomeCidade1, nomeCidade2);
    printf("População: %d \n", populacaoCidade1 > populacaoCidade2);
    printf("Área: %d \n", areaCidade1 > areaCidade2);
    printf("PIB: %d \n", pibCidade1 > pibCidade2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d \n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: %d \n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d  \n \n", superPoderCidade1 > superPoderCidade2);





    return 0;
}
