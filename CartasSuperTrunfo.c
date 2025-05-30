#include <stdio.h>

int main() {
    // variáveis: dos tipos(inteiros, pontos flutuantes, char com string)
    int turismo;
    float area, PIB, populacao, dencidade, PIBCapita;
    char estado;
    char codigo[50], cidade[50];

    // Cadastro das Cartas: EXP: printei a menssagem que sera exibida na tela com a funçao (printf) 
    // digitalizei com a função (scanf) usando os especificadores

    // inicio do cadastro da carta 01
    printf("Digite o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a populacao da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turistico da cidade: \n");
    scanf("%d", &turismo);
    // Fim do cadastro da carta 01
    

    // inicio do cadastro da carta 02
    printf("Digite o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a populacao da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turistico da cidade: \n");
    scanf("%d", &turismo);
    // Fim do cadastro da carta 02
    dencidade = populacao / area;
    PIBCapita = PIB / populacao;

    // Exibição dos Dados das Cartas: EXP: printei todo o cadastro
    // e em alguns coloquei a menssagem que sera exibida apos o usuario digitar, EXP: (milhões)

    printf("*** Super Trunfo ***\n");
    // inicio da exibição da carta 01
    printf("Carta: 01 \n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n:", codigo);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %f Milhoes de Habitantes \n", populacao);
    printf("Area: %.2f KM² \n", area);
    printf("PIB: %.2f Milões de Reais \n", PIB);
    printf("Turismo: %d Pontos Turistico \n", turismo);
    printf("Dencidade populacional: %.2f Milões de hab/km²\n", dencidade);
    printf("PIB pér Capita: %2.f Reais\n", PIBCapita);
    // Fim da exibição da carta 01

    // inicio da exibição da carta 02
    printf("carta: 02 \n");
    printf("estado: %c \n", estado);
    printf("codigo: %s \n:", codigo);
    printf("cidade: %s \n", cidade);
    printf("populacao: %f Milhoes de Habitantes \n", populacao);
    printf("area: %.2f KM² \n", area);
    printf("PIB: %.2f milhoes de reais \n", PIB);
    printf("turismo: %d Pontos Turistico \n", turismo);
    printf("Dencidade populacional: %.2f Milões de hab/km²\n", dencidade);
    printf("PIB pér Capita: %2.f Reais\n", PIBCapita);
    // Fim da exibição da carta 02



    return 0;

}