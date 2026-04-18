#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50];
  char cidade[30];
  char codigo[10];
  int população;
  int pontosturisticos;
  float areakm²;
  float pib;

  // Variaveis da carta 1

  char estado1[50];
  char cidade1[30];
  char codigo1[10];
  int população1;
  int pontosturisticos1;
  float areakm²1;
  float pib1;

  // Variaveis da carta 2

  char estado2[50];
  char cidade2[30];
  char codigo2[10];
  int população2;
  int pontosturisticos2;
  float areakm²2;
  float pib2;

  // Área para entrada de dados

  // Carta 1

  printf(" *Informações da carta 1\n");
  printf("Digite o Estado:\n");
  scanf("%s", estado1);
  printf("Digite o código do Estado:\n");
  scanf("%s",codigo1);
  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade1);
  printf("População:\n");
  scanf("%d", &população1);
  printf("Digite a área da cidade:\n");
  scanf("%f", &areakm²1);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosturisticos1);
  
  // Pula uma linha para informações da carta 2
  printf("\n");

  // Carta 2   

  printf(" *Informações da carta 2\n");
  printf("Digite o Estado:\n");
  scanf("%s", estado2);
  printf("Digite o código do Estado:\n");
  scanf("%s",codigo2);
  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade2);
  printf("População:\n");
  scanf("%d", &população2);
  printf("Digite a área da cidade:\n");
  scanf("%f", &areakm²2);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosturisticos2);

  // Pula uma linha antes de exibir a carta
  printf("\n");

  // Área para exibição dos dados da cidade

  // Carta 1

   printf("  *Carta 1\n");
   printf("Estado:%s, %s\n",estado1, codigo1);
   printf("Cidade:%s\n",cidade1);
   printf("Populção:%d\n",população1);
   printf("Área:%.2f Km²\n",areakm²1);
   printf("PIB:%.2f Bilhões de reais\n",pib1);
   printf("Número de pontos turísticos:%d\n\n", pontosturisticos1);

  //Carta 2  

   printf("  *Carta 2\n");
   printf("Estado:%s, %s\n",estado2,codigo2);
   printf("Cidade:%s\n",cidade2);
   printf("Populção:%d\n",população2);
   printf("Área:%.2f Km²\n",areakm²2);
   printf("PIB:%.2f Bilhões de reais\n",pib2);
   printf("Número de pontos turísticos:%d\n\n", pontosturisticos2);

   return 0;


} 
