#include <stdio.h>

int main (){

    //variáveis referentes à primeira carta:
    char estado01, codigo_da_carta01[50], nome_da_cidade01[50];
    int populacao01, pontos_turisticos01;
    float area01, pib01;

    //variáveis referentes à segunda carta:
    char estado02, codigo_da_carta02[50], nome_da_cidade02[50];
    int populacao02, pontos_turisticos02;
    float area02, pib02;

    printf("Olá! Bem vindo ao sistema de cadastro de cartas do Super Trunfo. Para que suas cartas sejam cadastradas, você precisará responder algumas perguntas. É bem simples e leva apenas alguns minutinhos. Vamos lá?\n");
    //Frase introdutória que apresenta o sistema e instrui ao usuário o que ele deve fazer. 

    printf("\nVamos começar com o cadastro da sua primeira carta!\n");//Indica o início da coleta de dados referentes à primeira carta. 

    /*
    À partir de agora:
      printf: exibirá as perguntas que o usuário precisa responder.
      scanf: lê e armazena os dados que o usuário digitar.
    */

    printf("\nOs estados são representados por letras de 'A' a 'H'. Qual letra representa o estado da sua carta?\n");//O usuário deve digitar apenas uma letra, referente ao estado correspondente à sua carta.
    scanf(" %c", &estado01);

    printf("Qual é o código da sua carta?\n");//O código é composto pela letra do estado seguida do número da carta, de 01 a 04.
    scanf("%s", codigo_da_carta01);

    printf("Qual é o nome da cidade da sua carta?\n");//O usuário não deve digitar nomes com espaços.
    scanf("%s", nome_da_cidade01);

    printf("Qual é o número de habitantes dessa cidade?\n");
    scanf("%d", &populacao01);

    printf("Qual é a área, em km², dessa cidade?\n");
    scanf("%f", &area01);

    printf("Qual é o PIB dessa cidade?\n");
    scanf("%f", &pib01);

    printf("Quantos pontos turísticos essa cidade possui?\n");
    scanf("%d", &pontos_turisticos01);

    printf("\nÓtimo! Vamos agora ao cadastro da sua segunda carta!\n");//Indica o término da solicitação de dados da primeira carta e o início da coleta de dados referentes à segunda.

    /*
    À partir de agora:
      printf: exibirá as perguntas que o usuário precisa responder.
      scanf: lê e armazena os dados que o usuário digitar.
    */

    printf("\nOs estados são representados por letras de 'A' a 'H'. Qual letra representa o estado da sua carta?\n");//O usuário deve digitar apenas uma letra, referente ao estado correspondente à sua carta.
    scanf(" %c", &estado02);

    printf("Qual é o código da sua carta?\n");//O código é composto pela letra do estado seguida do número da carta, de 01 a 04.
    scanf("%s", codigo_da_carta02);

    printf("Qual é o nome da cidade da sua carta?\n");//O usuário não deve digitar nomes com espaços.
    scanf("%s", nome_da_cidade02);

    printf("Qual é o número de habitantes dessa cidade?\n");
    scanf("%d", &populacao02);

    printf("Qual é a área, em km², dessa cidade?\n");
    scanf("%f", &area02);

    printf("Qual é o PIB dessa cidade?\n");
    scanf("%f", &pib02);

    printf("Quantos pontos turísticos essa cidade possui?\n");
    scanf("%d", &pontos_turisticos02);

    printf("\nPerfeito! Suas duas cartas foram cadastradas com sucesso! Confira as informações de cada uma abaixo:\n");
    //Conclui a etapa de solicitações dos dados e, abaixo, serão exibidas todas as informações que o usuário digitou, organizados por carta.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigo_da_carta01);
    printf("Nome da Cidade: %s\n", nome_da_cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos01);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo_da_carta02);
    printf("Nome da Cidade: %s\n", nome_da_cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos02);

    return 0;

}