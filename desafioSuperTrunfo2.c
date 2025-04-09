#include <stdio.h>
int main(){
    printf("Vamos começar agora o jogo SUPER TRUFO!\n");
    
    char estado[03];
    char codigoCarta[04];
    char nomeCidade[15];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPercapita;
    float superPoder;

    char estado2[03];
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
    printf("Digite a sigla do seu Estado:\n");
    scanf("%s", estado);

    printf("Insira o código da sua carta (é a primeira letra do estado mais um número de 0 a 3): \n");
    scanf("%s", codigoCarta);
    
    printf("Insira o nome da sua cidade: \n");
    scanf("%s", nomeCidade);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%lu", &populacao);

    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("O PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("O número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = (float)populacao/area;
    pibPercapita = pib/(float)populacao;
    superPoder = (float)populacao + area + pib + pontosTuristicos + pibPercapita - densidadePopulacional;

    
    //DADOS DA CARTA Nº 2

    printf("Agora iremos inserir os dados da CARTA Nº 2.\n");

    printf("Digite a sigla do seu Estado:\n");
    scanf(" %s", estado2);

    printf("Insira o código da sua carta (é a primeira letra do estado mais um número de 0 a 3): \n");
    scanf("%s", codigoCarta2);
     
    printf("Insira o nome da sua cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("O PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("O número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

   
    pibPercapita2 = pib2/(float)populacao2;
    densidadePopulacional2 = (float)populacao2/area2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 - densidadePopulacional2;


    printf("Comparação das cartas (Atributo PIB per Capita).\n\n");
    printf("Carta Nº 1 - %s (%s): %.2f\n", estado, nomeCidade, pibPercapita);
    printf("Carta Nº 1 - %s (%s): %.2f\n", estado2, nomeCidade2, pibPercapita2);

    if(pibPercapita > pibPercapita2){
        printf("Carta Nº 1 (%s) venceu!\n",nomeCidade);
    } else {
        printf("Carta Nº 2 (%s) venceu!\n", nomeCidade2);
    } 
    return 0;

}
