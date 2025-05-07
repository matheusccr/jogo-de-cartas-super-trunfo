#include <stdio.h>
int main () {
    char estado1;
    char estado2 [5];
    char codigo_carta1 [10], codigo_carta2 [10];
    char cidade1 [20], cidade2 [20];
    int codigo_cidade1, codigo_cidade2;
    unsigned long int populacao1, populacao2; // alteraçao de tipo para o nivel mestre
    float area1, area2;
    float PIB_1, PIB_2;
    int pontos_turisticos1, pontos_turisticos2;
  //densidade populacional e PIB (nivel aventureiro)
    float densidade1, densidade2;
    float PIB_percapta1, PIB_percapta2;
     
printf ("Ola, bem vindo ao jogo de cartas Super Trunfo-Paises. \n");

printf("Vamos cadastras suas cartas, por favor, siga as intruções a seguir: \n");
//explicaçao para o cadastro das cartas
printf("Nesse jogo, imagine um país dividido em 8 estados (A-H), cada estado possui 4 cidades (01-04). \n");

//cadastramento da carta 01
printf("Carta 01 \n");

printf("Digite a letra do estado: ");
scanf("%c", &estado1);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade1);

printf("Escolha o numero da cidade (01-04): ");
scanf("%d",&codigo_cidade1);

printf("Digite o codigo da carta (letra do estado + numero da cidade): ");
scanf("%s", &codigo_carta1);

printf("Digite a população (sem pontuaçao, apenas numeros): ");
scanf("%d", &populacao1);

printf("Digite a área da cidade : ");
scanf("%f", &area1);

printf("Digite o PIB : ");
scanf("%f", &PIB_1);

printf("Quantos pontos turísticos essa cidade tem: ");
scanf("%d", &pontos_turisticos1);

//termino do cadastro da carta 01

//cadastro da carta 02

printf("Carta 02 \n");

printf("Digite a letra do estado: ");
scanf("%s", estado2);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade2);

printf("Escolha o numero da cidade (01-04): ");
scanf("%d",&codigo_cidade2);

printf("Digite o codigo da carta (letra do estado + numero da cidade): ");
scanf("%s", &codigo_carta2);

printf("Digite a população (sem pontuaçao, apenas numeros): ");
scanf("%d", &populacao2);

printf("Digite a área da cidade : ");
scanf("%f", &area2);

printf("Digite o PIB : ");
scanf("%f", &PIB_2);

printf("Quantos pontos turísticos essa cidade tem: ");
scanf("%d", &pontos_turisticos2);

//termino do cadastro da carta 2

//impressao das cartas 01 e 02 cadastradas pelo usuario

printf("Parabéns, você terminou o cadastro das cartas, por favor verifique-as abaixo.\n");

//carta 01

printf("Carta 01\n"); //carta 01, resultado

  printf("Estado: %c\n", estado1);
  printf("Cidade: %s\n", cidade1);
  printf("Nº da cidade: %d\n", codigo_cidade1);
  printf("Codigo da carta: %s\n", codigo_carta1);
  printf("Populção: %d habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f\n", PIB_1);
  printf("Nº de pontos turísticos: %d\n", pontos_turisticos1);  
 //densidade pupulacional e pib percapta

 densidade1= (float)populacao1/area1;
  printf("Densidade pupulacional: %.2f hab/km²\n", densidade1);

  PIB_percapta1= PIB_1/(float)populacao1;
  printf("PIB per capta: %.2f reais\n", PIB_percapta1);
//carta 02  

printf("Carta 02\n"); //carta 02, resultado
   printf("Estado: %c\n", estado2);
   printf("Cidade: %s\n", cidade2);
   printf("Nº da cidade: %d\n", codigo_cidade2);
   printf("Codigo da carta: %s\n", codigo_carta2);
   printf("Populção: %d habitantes\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: R$ %.2f\n", PIB_2);
   printf("Nº de pontos turísticos: %d\n", pontos_turisticos2);

   //densidade pupulacional e pib percapta

 densidade2= (float)populacao2/area2;
 printf("Densidade pupulacional: %.2f hab/km²\n", densidade2);

 PIB_percapta2= PIB_2/(float)populacao2;
 printf("PIB per capta: %.2f reais\n", PIB_percapta2);

return 0;


}
