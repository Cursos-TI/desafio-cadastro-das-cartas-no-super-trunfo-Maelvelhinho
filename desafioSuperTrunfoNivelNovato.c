#include <stdio.h>
int main(){
    printf("Vamos começar agora o jogo SUPER TRUFO!\n");
    
    char estado;
    char codigoCarta[04];
    char nomeCidade[15];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;


    char estado2;
    char codigoCarta2[04];
    char nomeCidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    
    printf("Insira os dados solicitados para cadastro da CARTA Nº 1.\n");
    printf("Insira a letra inicial do seu Estado:\n");
    scanf("%c", &estado);
    
    printf("Agora o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%s", codigoCarta);
    
    printf("Insira o nome da sua cidade: \n");
    scanf("%s", nomeCidade);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("O produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    printf("O número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    
    //DADOS DA CARTA Nº 2

    printf("Agora iremos inserir os dados da CARTA Nº 2.\n");

    printf("Insira a letra inicial do seu Estado:\n");
    scanf(" %c", &estado2);
    
    printf("Agora o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%s", codigoCarta2);
    
    printf("Insira o nome da sua cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("O produto interno bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("O número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

 

    printf("Dados cadastrados na carta nº 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosTuristicos);
  

    printf("Dados cadastrados na carta nº 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosTuristicos2);
   
    return 0;

}
