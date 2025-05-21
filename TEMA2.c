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
  //super poder do nivel mestre
    float superPoder1, superPoder2;
  //variável para o menu 
    int opcaoComparation;
     
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
scanf("%ld", &populacao1);

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
scanf("%ld", &populacao2);

printf("Digite a área da cidade : ");
scanf("%f", &area2);

printf("Digite o PIB : ");
scanf("%f", &PIB_2);

printf("Quantos pontos turísticos essa cidade tem: ");
scanf("%d", &pontos_turisticos2);

//termino do cadastro da carta 2

//impressao das cartas 01 e 02 cadastradas pelo usuario

printf("Parabéns, você terminou o cadastro das cartas, por favor verifique-as abaixo.\n");
printf("\n");// espaço para organizar a saida

//carta 01
printf("\n");

printf("Carta 01\n"); //carta 01, resultado

  printf("Estado: %c\n", estado1);
  printf("Cidade: %s\n", cidade1);
  printf("Nº da cidade: %d\n", codigo_cidade1);
  printf("Codigo da carta: %s\n", codigo_carta1);
  printf("Populção: %ld habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f\n", PIB_1);
  printf("Nº de pontos turísticos: %d\n", pontos_turisticos1);  
 //densidade pupulacional e pib percapta

 densidade1= (float)populacao1/area1;
  printf("Densidade pupulacional: %.2f hab/km²\n", densidade1);

  PIB_percapta1= PIB_1/(float)populacao1;
  printf("PIB per capta: %.2f reais\n", PIB_percapta1);

  // super poder 

 superPoder1 = (float) populacao1 + area1 + PIB_1 + (float) pontos_turisticos1 + PIB_percapta1 + (1/densidade1);
 printf("Super Poder: %f \n", superPoder1);

 printf("\n");

//carta 02  
 printf("\n");

printf("Carta 02\n"); //carta 02, resultado
   printf("Estado: %s\n", estado2);
   printf("Cidade: %s\n", cidade2);
   printf("Nº da cidade: %d\n", codigo_cidade2);
   printf("Codigo da carta: %s\n", codigo_carta2);
   printf("Populção: %ld habitantes\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: R$ %.2f\n", PIB_2);
   printf("Nº de pontos turísticos: %d\n", pontos_turisticos2);

   //densidade pupulacional e pib percapta

 densidade2= (float)populacao2/area2;
 printf("Densidade pupulacional: %.2f hab/km²\n", densidade2);

 PIB_percapta2= PIB_2/(float)populacao2;
 printf("PIB per capta: %.2f reais\n", PIB_percapta2);

  // super poder 

 superPoder2 = (float) populacao2 + area2 + PIB_2 + (float) pontos_turisticos2 + PIB_percapta2 + (1/densidade2);
 printf("Super Poder: %f \n", superPoder1);
 printf("\n");


// Comparaçao entre os atributos 
printf("*****Comparação de cartas.*******\n");
    //menu para o usuario escolher qual o criterio de comparaçao
printf("1. População. \n");
printf("2. Área.\n");
printf("3. PIB.\n");
printf("4. Pontos turisticos.\n");
printf("5. Densidade Populacional.\n");
printf("6. PIB per capta \n");
printf("7. Super Poder \n");
printf("Escolha o tipo de comparaçao desejada. \n");
scanf("%d", &opcaoComparation);

printf("\n");

switch (opcaoComparation)
{
case 1:
    
    printf("Populaçao: \n");
    if (populacao1>populacao2){
         printf ("Carta 1 venceu.\n");
         printf("Cidade: %s\n", cidade1);
         
    } else if (populacao1<populacao2) {
         printf("Carta 2 venceu.\n");
         printf("CIdade: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }
     
     printf("Populção 1: %ld habitantes -- Populção 2: %ld habitantes", populacao1, populacao2 );
    
    break;

case 2:

     printf("Area: \n");
    if (area1>area2){
         printf ("Carta 1 venceu.\n");
         printf("Cidade: %s\n", cidade1);
    } else if(area1<area2){
         printf("Carta 2 venceu.\n");
         printf("Cidade: %s\n", cidade2);
    } else {
         printf("Empate!\n");
    }
     
     printf("Área 1: %.2f km² -- Área: 2 %.2f km²\n", area1, area2 );
   
    break;
case 3:
    
    printf("PIB: \n");
     if (PIB_1>PIB_2){
         printf ("Carta 1 venceu.\n");
         printf("Cidade: %s\n", cidade1);
    } else if(PIB_1<PIB_2){
         printf("Carta 2 venceu.\n");
         printf("Cidade: %s\n", cidade2);
    } else { 
         printf("Empate!\n");
    }

     printf("PIB 1: R$ %.2f -- PIB 2: R$ %.2f\n", PIB_1, PIB_2);
    break;
case 4:

    printf("Pontos turisticos: \n");
     if ( pontos_turisticos1>pontos_turisticos2){
         printf ("Carta 1 venceu.\n");
         printf("Cidade: %s\n", cidade1);
    } else if( pontos_turisticos1<pontos_turisticos2){
         printf("Carta 2 venceu.\n");
         printf("Cidade: %s\n", cidade2);
    } else { 
         printf("Empate!\n");
    }

     printf("Nº de pontos turísticos 1: %d -- Nº de pontos turísticos 2: %d\n", pontos_turisticos1, pontos_turisticos2);
   
    break;
case 5:

    printf("Densidade Populacional: \n");
     if (densidade1<densidade2){
         printf ("Carta 1 venceu.\n");
         printf("Cidade: %s\n", cidade1);
    } else if(densidade1>densidade2){
         printf("Carta 2 venceu.\n");
         printf("Cidade: %s\n", cidade2);
    } else { 
         printf("Empate!\n");
    }

     printf("Densidade 1: %.2f hab/km²-- Densidade 2: %.2f hab/km²\n", densidade1, densidade2 );
   
    break;
case 6:
     printf("PIB per capta: \n");
     if (PIB_percapta1>PIB_percapta2){
         printf ("Carta 1 venceu.\n");
         printf("Cidade: %s\n", cidade1);
    } else if(PIB_percapta1<PIB_percapta2){
         printf("Carta 2 venceu.\n");
         printf("Cidade: %s\n", cidade2);
    } else { 
         printf("Empate!\n");
    }

     printf("PIB per capta 1: %.2f reais -- PIB per capta 2: %.2f reais\n", PIB_percapta1, PIB_percapta2 );
    break;
case 7:
    
     printf("Super Poder: \n");
     if (superPoder1>superPoder2){
         printf ("Carta 1 venceu.\n");
         printf("Cidade: %s\n", cidade1);
    } else if(superPoder1<superPoder2){
         printf("Carta 2 venceu.\n");
         printf("Cidade: %s\n", cidade2);
    } else { 
         printf("Empate!\n");
    }

     printf("Super Poder 1 : %f -- Super Poder 2: %f \n", superPoder1, superPoder2);
    break;

default: 
    printf("Opção Inválida! \n");
    break;
}

    
}


