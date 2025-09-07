#include <stdio.h>

int main (){

  //variáveis referentes à primeira carta:
    char estado01, codigo_da_carta01[50], nome_da_cidade01[50];
    int pontos_turisticos01;
    unsigned long int populacao01;
    float area01, pib01, densidade_populacional01, pib_per_capita01, super_poder01;

    //variáveis referentes à segunda carta:
    char estado02, codigo_da_carta02[50], nome_da_cidade02[50];
    int pontos_turisticos02;
    unsigned long int populacao02;
    float area02, pib02, densidade_populacional02, pib_per_capita02, super_poder02;

    printf("Olá! Bem-vindo ao sistema de cadastro de cartas do Super Trunfo. Para que suas cartas sejam cadastradas, você precisará responder algumas perguntas. É bem simples e leva apenas alguns minutinhos. Vamos lá?\n");
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
    scanf("%ld", &populacao01);

    printf("Qual é a área, em km², dessa cidade?\n");
    scanf("%f", &area01);

    printf("Qual é o PIB dessa cidade?\n");
    scanf("%f", &pib01);

    printf("Quantos pontos turísticos essa cidade possui?\n");
    scanf("%d", &pontos_turisticos01);

    densidade_populacional01 = (float) populacao01 / area01;
    //calcula a densidade populacional da primeira carta dividindo a população pela área, digitados pelo usuário.

    pib_per_capita01 = pib01 / (float) populacao01;//calcula o pib per capita da primeira carta dividindo o pib total pela população, digitados pelo usuário.

    super_poder01 = (float) populacao01 + area01 + pib01 + (float) pontos_turisticos01 + pib_per_capita01 + (float) (1/densidade_populacional01);
    //calcula o super poder da primeira carta, somando os atributos: população, área, PIB, número de pontos turísticos, PIB per capita e inverso da densidade populacional (quanto menor a densidade, maior o "poder").   

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
    scanf("%ld", &populacao02);

    printf("Qual é a área, em km², dessa cidade?\n");
    scanf("%f", &area02);

    printf("Qual é o PIB dessa cidade?\n");
    scanf("%f", &pib02);

    printf("Quantos pontos turísticos essa cidade possui?\n");
    scanf("%d", &pontos_turisticos02);

    densidade_populacional02 = (float) populacao02 / area02;
    //calcula a densidade populacional da segunda carta dividindo a população pela área, digitados pelo usuário.

    pib_per_capita02 = pib02 / (float) populacao02;//calcula o pib per capita da segunda carta dividindo o pib total pela população, digitados pelo usuário.

    super_poder02 = (float) populacao02 + area02 + pib02 + (float) pontos_turisticos02 + pib_per_capita02 + (float) (1/densidade_populacional02);
    //calcula o super poder da segunda carta, somando os atributos: população, área, PIB, número de pontos turísticos, PIB per capita e inverso da densidade populacional (quanto menor a densidade, maior o "poder").

    printf("\nPerfeito! Suas duas cartas foram cadastradas com sucesso! Confira as informações de cada uma abaixo:\n");
    /*Conclui a etapa de solicitações dos dados e, abaixo, serão exibidas todas as informações que o usuário digitou e 
      os valores que o programa calculou com base nos dados fornecidos, organizados por carta.*/

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigo_da_carta01);
    printf("Nome da Cidade: %s\n", nome_da_cidade01);
    printf("População: %ld\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional01);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita01);
    printf("Super Poder: %.2f\n", super_poder01);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo_da_carta02);
    printf("Nome da Cidade: %s\n", nome_da_cidade02);
    printf("População: %ld\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional02);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita02);
    printf("Super Poder: %.2f\n", super_poder02);

    printf("\nAgora, confira abaixo qual das suas cartas venceu:\n");
    /*
    Nessa etapa, é feita a comparação dos valores das duas cartas e exibe na tela se a primeira carta ganhou ou não.
      Caso apareça o n° 1 na tela, a carta 1 ganhou.
      Caso apareça o n° 0 na tela, a carta 2 ganhou.

    Obs.: No caso da comparação da densidade populacional, a carta com MENOR valor vence.
    */
    printf("\nPopulação -> Carta 1 venceu: %d\n", populacao01 > populacao02);
    printf("Área -> Carta 1 venceu: %d\n", area01 > area02);
    printf("PIB -> Carta 1 venceu: %d\n", pib01 > pib02);
    printf("Pontos Turísticos -> Carta 1 venceu: %d\n", pontos_turisticos01 > pontos_turisticos02);
    printf("Densidade Populacional -> Carta 1 venceu: %d\n", densidade_populacional01 < densidade_populacional02);
    printf("PIB per Capita -> Carta 1 venceu: %d\n", pib_per_capita01 > pib_per_capita02);
    printf("Super Poder -> Carta 1 venceu: %d\n", super_poder01 > super_poder02);

    return 0;

}