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

    int escolha;

    printf("¨¨VAMOS COMEÇAR A BATALHA¨¨\n\n");
    printf("Escolha o número referente ao atributo da carta que irá para o duelo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Atributo escolhido: POPULAÇÃO.\n\n");
        printf("Carta Nº 1 - %s (%s): %lu\n", estado, nomeCidade, populacao);
        printf("Carta Nº 2 - %s (%s): %lu\n", estado2, nomeCidade2, populacao2);

        if(populacao > populacao2){
            printf("Carta Nº 1 (%s) venceu!\n",nomeCidade);
        } else if (populacao < populacao2) {
            printf("Carta Nº 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Empate!");
        }
        break;

        case 2:
        printf("Atributo escolhido: ÁREA.\n\n");
        printf("Carta Nº 1 - %s (%s): %.2f\n", estado, nomeCidade, area);
        printf("Carta Nº 2 - %s (%s): %.2f\n", estado2, nomeCidade2, area2);

        if(area > area2){
            printf("Carta Nº 1 (%s) venceu!\n",nomeCidade);
        } else if (area < area2) {
            printf("Carta Nº 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Empate!");
        }
        break;

        case 3:
        printf("Atributo escolhido: PIB.\n\n");
        printf("Carta Nº 1 - %s (%s): %.2f\n", estado, nomeCidade, pib);
        printf("Carta Nº 2 - %s (%s): %.2f\n", estado2, nomeCidade2, pib2);

        if(pib > pib2){
            printf("Carta Nº 1 (%s) venceu!\n",nomeCidade);
        } else if (pib < pib2) {
            printf("Carta Nº 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Empate!");
        }
        break;

        case 4:
        printf("Atributo escolhido: NÚMERO DE PONTOS TURÍSTICOS.\n\n");
        printf("Carta Nº 1 - %s (%s): %d\n", estado, nomeCidade, pontosTuristicos);
        printf("Carta Nº 2 - %s (%s): %d\n", estado2, nomeCidade2, pontosTuristicos2);

        if(pontosTuristicos > pontosTuristicos2){
            printf("Carta Nº 1 (%s) venceu!\n",nomeCidade);
        } else if (pontosTuristicos < pontosTuristicos2) {
            printf("Carta Nº 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Empate!");
        }
        break;

        case 5:
        printf("Atributo escolhido: DENSIDADE DEMOGRÁFICA.\n\n");
        printf("Carta Nº 1 - %s (%s): %.2f\n", estado, nomeCidade, densidadePopulacional);
        printf("Carta Nº 2 - %s (%s): %.2f\n", estado2, nomeCidade2, densidadePopulacional2);

        if(densidadePopulacional < densidadePopulacional2){
            printf("Carta Nº 1 (%s) venceu!\n",nomeCidade);
        } else if (densidadePopulacional > densidadePopulacional2) {
            printf("Carta Nº 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Empate!");
        }
        break;
    default:
        break;
    }


    return 0;

}
