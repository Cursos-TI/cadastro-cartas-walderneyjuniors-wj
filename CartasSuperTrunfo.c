#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades.
// Grupo de variáveis char
  char jogador[30], estado01[30], estado02[30], codigo01[5], codigo02[5], cidade01[30], cidade02[30];
// Grupo de variáveis int
  int populacao01, populacao02, passeio01, passeio02;
// Grupo de variáveis float
  float area01, area02, pib01, pib02, densidade01, densidade02, percapita01, percapita02;

  //Cada variável terminada em 01 corresponde as informações da CARTA 01, já as terminadas em 02 são as informações da CARTA 02.

  // Área para entrada de dados
  // Agora serão solicitadas as informações de cada uma das cartas ao jogador

  printf("   ---   Bem Vindo jogador!   ---   \n");
  printf("Qual seu nome?\n"); // Nome do jogador
  fgets(jogador, 30, stdin);
  jogador[strcspn(jogador, "\n")] = 0;

  // Menu interativo para o usuario escolher entre iniciar o jogo, ler as regras ou sair do jogo
  int opcao;
  int escolhausuario;
  printf("\n   ---   MENU   ---   \n");
  printf("Escolha uma opção:\n\n");
  printf("1 - Iniciar o jogo\n");
  printf("2 - Regras do jogo\n");
  printf("3 - Sair\n");
  scanf(" %d", &opcao);


  switch (opcao) {
  case 1:
    printf("\n   ---   Para começar o jogo você deverá preencher as informações das suas cartas   ---   \n"); 
    printf("\nMas antes escolha qual atributo deseja usar para comparar as cartas, e determinar o vencedor.\n\n");

    printf("1 - População\n");
    printf("2 - Área em km²\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    scanf(" %d", &escolhausuario);

    switch (escolhausuario) {
      case 1:
        printf("\n   ---   Atributo escolhido: POPULAÇÃO   ---   ");
        break;
      case 2:
        printf("\n   ---   Atributo escolhido: ÁREA EM KM²   ---   ");
        break;
      case 3:
        printf("\n   ---   Atributo escolhido: PIB   ---   ");
        break;
      case 4:
        printf("\n   ---   Atributo escolhido: NÚMERO DE PONTOS TURÍSTICOS   ---   ");
        break;
      case 5:
        printf("\n   ---   Atributo escolhido: DENSIDADE POPULACIONAL   ---   ");
        break;
    }

    printf("\n   ---   Ótima escolha! Agora vamos preencher as informações das suas cartas.   ---   \n");

  // Instruções ao jogador (usuário).
  printf("\n   ---   Para começar o jogo você deverá preencher as informações das suas cartas   ---   \n"); 
  printf("Por favor, preencha as informações das suas cartas\n");

  // Estado da Carta 01
  printf("Qual o Estado da CARTA 01?   ---   ETAPA 1/7\n");
  fgets(estado01, 30, stdin);
  fgets(estado01, 30, stdin);
  estado01[strcspn(estado01, "\n")] = 0;

  // Estado da Carta 02
  printf("Qual o Estado da CARTA 02?   ---   ETAPA 1/7\n");
  fgets(estado02, 30, stdin);
  estado02[strcspn(estado02, "\n")] = 0;

  // Código da Carta 01
  printf("Qual o código da CARTA 01?   ---   ETAPA 2/7\n");
  printf("Ex. A01 - A letra corresponde a letra inicial do Estado\n");
  fgets(codigo01, 5, stdin);
  codigo01[strcspn(codigo01, "\n")] = 0;

  // Código da Carta 02
  printf("Qual o código da CARTA 02?   ---   ETAPA 2/7\n");
  printf("Ex. A01 - A letra corresponde a letra inicial do Estado\n");
  fgets(codigo02, 5, stdin);
  codigo02[strcspn(codigo02, "\n")] = 0;

  // Nome da Cidade da Carta 01
  printf("Qual o nome da Cidade da CARTA 01?   ---   ETAPA 3/7\n");
  fgets(cidade01, 30, stdin);
  cidade01[strcspn(cidade01, "\n")] = 0;

  // Nome da Cidade da Carta 02
  printf("Qual o nome da Cidade da CARTA 02?   ---   ETAPA 3/7\n");
  fgets(cidade02, 30, stdin);
  cidade02[strcspn(cidade02, "\n")] = 0;

  // Número de habitantes da Carta 01
  printf("Informe a população da Cidade da CARTA 01:   ---   ETAPA 4/7\n");
  scanf(" %d", &populacao01);

  // Número de habitantes da Carta 02
  printf("Informe a poupulação da Cidade da CARTA 02:   ---   ETAPA 4/7\n");
  scanf(" %d", &populacao02);

  // Área em km² da Carta 01
  printf("Digite a área da Cidade da CARTA 01 em Km²:   ---   ETAPA 5/7\n");
  scanf(" %f", &area01);

  // Área em km² da Carta 02
  printf("Digite a área da Cidade da CARTA 02 em Km²:   ---   ETAPA 5/7\n");
  scanf(" %f", &area02);

  // PIB da Carta 01
  printf("Qual o PIB (Produto Interno Bruto) da CARTA 01:   ---   ETAPA 6/7\n");
  scanf(" %f", &pib01);

  // PIB da Carta 02
  printf("Qual o PIB (Produto Interno Bruto) da CARTA 02:   ---   ETAPA 6/7\n");
  scanf(" %f", &pib02);

  // Número de Pontos Turísticos da Carta 01
  printf("Quantos Pontos Turísticos tem na Cidade da CARTA 01?   ---   ETAPA 7/7\n");
  scanf(" %d", &passeio01);

  // Número de Pontos Turísticos da Carta 02
  printf("Quantos Pontos Turísticos tem na Cidade da CARTA 02?   ---   ETAPA 7/7\n");
  scanf(" %d", &passeio02);

  // SESSÃO DE CÁLCULOS 
  densidade01 = (float) populacao01 / area01;
  densidade02 = (float) populacao02 / area02;
  percapita01 = (float) pib01 / populacao01;
  percapita02 = (float) pib02 / populacao02;
  float inversodensidade01 = 1 / densidade01;
  float inversodensidade02 = 1 / densidade02;
  float superpoder01 = populacao01 + area01 + pib01 + passeio01 + percapita01 + inversodensidade01;
  float superpoder02 = populacao02 + area02 + pib02 + passeio02 + percapita02 + inversodensidade02;

  // Área para exibição dos dados da cidade

  printf("\n   ---   Pronto! Foram preenchidas todas as informações.   ---   \n");
  
  /*printf("\n As suas cartas são:\n");

  printf("\n---------------------------------\n");
  printf("            CARTA 01            \n");
  printf("---------------------------------\n");
  printf("Estado: %s\n", estado01);
  printf("Código da Carta: %s\n", codigo01);
  printf("Nome da Cidade: %s\n", cidade01);
  printf("Habitantes: %d\n", populacao01);
  printf("Área em Km²: %.2f\n", area01);
  printf("PIB: %.2f\n", pib01);
  printf("Nº de Pontos Turísticos: %d\n", passeio01);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade01);
  printf("PIB per Capita: %.2f Reais\n", percapita01);
  printf("Super Poder: %.2f\n", superpoder01);
  printf("---------------------------------\n");


  printf("\n---------------------------------\n");
  printf("            CARTA 02            \n");
  printf("---------------------------------\n");
  printf("Estado: %s\n", estado02);
  printf("Código da Carta: %s\n", codigo02);
  printf("Nome da Cidade: %s\n", cidade02);
  printf("Habitantes: %d\n", populacao02);
  printf("Área em Km²: %.2f\n", area02);
  printf("PIB: %.2f\n", pib02);
  printf("Nº de Pontos Turísticos: %d\n", passeio02);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade02);
  printf("PIB per Capita: %.2f Reais\n", percapita02);
  printf("Super Poder: %.2f\n", superpoder02);
  printf("---------------------------------\n");*/


  printf("\n   ---   BOA SORTE %s!   ---   \n", jogador);

  /*printf("\nCOMPARAÇÃO ENTRE AS CARTAS:\n");
  printf("População: %d\n", populacao01 > populacao02);
  printf("Área: %d\n", area01 > area02);
  printf("PIB: %d\n", pib01 > pib02);
  printf("Pontos Turísticos: %d\n", passeio01 > passeio02);
  printf("Densidade Populacional: %d\n", densidade01 < densidade02);
  printf("PIB per Capita: %d\n", percapita01 > percapita02);
  printf("Super Poder: %d\n", superpoder01 > superpoder02);*/

    // Comparação de cartas e lógica de comparação
  printf("\n   ---   COMPARAÇÃO FINAL ENTRE AS CARTAS   ---   \n");
  printf("\nCidade da CARTA 01: %s   ||   Cidade da CARTA 02: %s\n", cidade01, cidade02);
  switch (escolhausuario) {
      case 1:
        printf("Atributo escolhido: POPULAÇÃO\n");
        printf("População da CARTA 01: %d habitantes   ||   População da CARTA 02: %d habitantes\n", populacao01, populacao02);
        if (populacao01 > populacao02) {
          printf("CARTA 01 é a vencedora com uma população de %d habitantes!\n", populacao01);
        } else if (populacao02 > populacao01) {
          printf("CARTA 02 é a vencedora com uma população de %d habitantes!\n", populacao02);
        } else {
          printf("Empate! Ambas as cartas têm a mesma população de %d habitantes!\n", populacao01);
        }
        break;
      case 2:
        printf("Atributo escolhido: ÁREA EM KM²\n");
        printf("Área da CARTA 01: %.2f Km²   ||   Área da CARTA 02: %.2f Km²\n", area01, area02);
        if (area01 > area02) {
          printf("CARTA 01 é a vencedora com uma área de %.2f Km²!\n", area01);
        } else if (area02 > area01) {
          printf("CARTA 02 é a vencedora com uma área de %.2f Km²!\n", area02);
        } else {
          printf("Empate! Ambas as cartas têm a mesma área de %.2f Km²!\n", area01);
        }
        break;
      case 3:
        printf("Atributo escolhido: PIB\n");
        printf("PIB da CARTA 01: %.2f Reais   ||   PIB da CARTA 02: %.2f Reais\n", pib01, pib02);
        if (pib01 > pib02) {
          printf("CARTA 01 é a vencedora com um PIB de %.2f Reais!\n", pib01);
        } else if (pib02 > pib01) {
          printf("CARTA 02 é a vencedora com um PIB de %.2f Reais!\n", pib02);
        } else {
          printf("Empate! Ambas as cartas têm o mesmo PIB de %.2f Reais!\n", pib01);
        }
        break;
      case 4:
        printf("Atributo escolhido: NÚMERO DE PONTOS TURÍSTICOS\n");
        printf("Número de Pontos Turísticos da CARTA 01: %d   ||   Número de Pontos Turísticos da CARTA 02: %d\n", passeio01, passeio02);
        if (passeio01 > passeio02) {
          printf("CARTA 01 é a vencedora com %d pontos turísticos!\n", passeio01);
        } else if (passeio02 > passeio01) {
          printf("CARTA 02 é a vencedora com %d pontos turísticos!\n", passeio02);
        } else {
          printf("Empate! Ambas as cartas têm o mesmo número de pontos turísticos: %d!\n", passeio01);
        }
        break;
      case 5:
        printf("Atributo escolhido: DENSIDADE POPULACIONAL\n");
        printf("Densidade Populacional da CARTA 01: %.2f hab/km²   ||   Densidade Populacional da CARTA 02: %.2f hab/km²\n", densidade01, densidade02);
        if (densidade01 < densidade02) {
          printf("CARTA 01 é a vencedora com uma densidade populacional de %.2f hab/km²!\n", densidade01);
        } else if (densidade02 < densidade01) {
          printf("CARTA 02 é a vencedora com uma densidade populacional de %.2f hab/km²!\n", densidade02);
        } else {
          printf("Empate! Ambas as cartas têm a mesma densidade populacional de %.2f hab/km²!\n", densidade01);
        }
        break;
    }
    printf("\n   ---   Fim do jogo.   ---   \n");

    break;
  case 2:
    printf("\n   ---   REGRAS DO JOGO   ---   \n");
    printf("1. O jogador deve preencher as informações de duas cartas representando cidades.\n");
    printf("2. Cada carta deve conter os seguintes atributos: Estado, Código da Carta, Nome da Cidade, População, Área em Km², PIB, Número de Pontos Turísticos, Densidade Populacional, PIB per Capita e Super Poder.\n");
    printf("3. O jogador deve escolher um atributo para comparar as cartas e determinar o vencedor.\n");
    printf("4. O vencedor é determinado com base no atributo escolhido (exemplo: maior POPULAÇÃO vence).\n");
    printf("5. O jogo pode ser jogado novamente preenchendo novas cartas ou escolhendo diferentes atributos para comparação.\n");
    break;

  case 3:
  printf("\n   ---   Saindo do jogo...   ---   \n");
    printf("\n   ---   Obrigado por jogar! Até a próxima!   ---   \n");
    break;

  default:
    printf("\n   ---   Opção inválida. Por favor, escolha uma opção válida do menu.   ---   \n");
    break;
}



return 0;
} 