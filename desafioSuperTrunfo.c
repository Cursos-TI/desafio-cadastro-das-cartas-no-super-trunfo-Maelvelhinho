#include <stdio.h>
int main(){
    printf("Vamos começar agora o jogo SUPER TRUFO!\n");
    
    char estado;
    char codigoCarta[04];
    char nomeCidade[15];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPercapita;
    float superPoder;

    char estado2;
    char codigoCarta2[04];
    char nomeCidade2[15];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPercapita2;
    float superPoder2;

    
    printf("Insira os dados solicitados para cadastro da CARTA Nº 1.\n");
    printf("Insira a letra inicial do seu Estado:\n");
    scanf("%c", &estado);
    
    printf("Agora o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%s", codigoCarta);
    
    printf("Insira o nome da sua cidade: \n");
    scanf("%s", nomeCidade);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%lu", &populacao);

    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("O produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    printf("O número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = (float)populacao/area;
    pibPercapita = pib/(float)populacao;
    superPoder = (float)populacao + area + pib + pontosTuristicos + pibPercapita - densidadePopulacional;

    
    //DADOS DA CARTA Nº 2

    printf("Agora iremos inserir os dados da CARTA Nº 2.\n");

    printf("Insira a letra inicial do seu Estado:\n");
    scanf(" %c", &estado2);
    
    printf("Agora o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%s", codigoCarta2);
    
    printf("Insira o nome da sua cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("O produto interno bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("O número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

   
    pibPercapita2 = pib2/(float)populacao2;
    densidadePopulacional2 = (float)populacao2/area2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 - densidadePopulacional2;

    printf("Dados cadastrados na carta nº 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área em Km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", pibPercapita);
    printf("O Super Poder vale = %.2f\n", superPoder);

    printf("Dados cadastrados na carta nº 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPercapita2);
    printf("O Super Poder vale = %.2f\n", superPoder2);

    printf("Agora iremos comparar as cartas para ver quem tem o maior valor. Se a carta Nº1 for maior o resultado será 1, se o resultado for 0 a carta Nº2 é maior: \n\n");

    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadePopulacional < densidadePopulacional2);
    printf("PIB per Capita: %d\n", pibPercapita > pibPercapita2);
    printf("Super poder: %d\n", superPoder > superPoder2);

    return 0;

}
