#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Tema 1 - Cadastro das Cartas
    // variáveis: dos tipos(inteiros, pontos flutuantes, char com string)
    int populacao, turismo;
    float area, PIB;
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
    scanf("%d", &populacao);

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
    scanf("%d", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turistico da cidade: \n");
    scanf("%d", &turismo);
    // Fim do cadastro da carta 02

    // Exibição dos Dados das Cartas: EXP: printei todo o cadastro
    // e em alguns coloquei a menssagem que sera exibida apos o usuario digitar, EXP: (milhões)

    // inicio da exibição da carta 01
    printf("carta: 01 \n");
    printf("estado: %c \n", estado);
    printf("codigo: %s \n:", codigo);
    printf("cidade: %s \n", cidade);
    printf("populacao: %d Milhoes de Habitantes \n", populacao);
    printf("area: %.2f KM² \n", area);
    printf("PIB: %.2f milhoes de reais \n", PIB);
    printf("turismo: %d Pontos Turistico \n", turismo);
    // Fim da exibição da carta 01

    // inicio da exibição da carta 02
    printf("carta: 02 \n");
    printf("estado: %c \n", estado);
    printf("codigo: %s \n:", codigo);
    printf("cidade: %s \n", cidade);
    printf("populacao: %d Milhoes de Habitantes \n", populacao);
    printf("area: %.2f KM² \n", area);
    printf("PIB: %.2f milhoes de reais \n", PIB);
    printf("turismo: %d Pontos Turistico \n", turismo);
    // Fim da exibição da carta 02



    return 0;
}
