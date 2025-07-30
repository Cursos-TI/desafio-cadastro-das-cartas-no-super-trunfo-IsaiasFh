#include <stdio.h>

int main(){

    /*====  CARTA 1  ====*/
    char estado[20];
    char Codcarta[20];/*Código da carta*/
    char cidade[20];/*Nome da cidade*/
    int populacao;/*Quantidade da População*/
    float km²;/*Área em quilômetros quadrados*/
    float pib;/*População Interno Bruto*/
    int npt;/*Número de pontos turisticos*/

    printf("-----   CARTA NÚMERO 1    ----- \n");
   
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);
   
    printf("Digite o código da carta: \n");
    scanf("%s", &Codcarta);
  
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
   
    printf("Digite a quantidade da populaçao: \n");
    scanf("%d", &populacao);
   
    printf("Digite a Àrea em Km²: \n");
    scanf("%f", &km²);
  
    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib);
   
    printf("Qual a quantidade de pontos turísticos: \n");
    scanf("%d", &npt);

    printf("CARTA NÚMERO 1: \n");
    
    printf("Nome do estado: %s\n",estado); 
    printf("Código da carta: %s\n",Codcarta);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Àrea: %f\n",km²);
    printf("PIB: %f\n",pib);
    printf("Número de Pontos Turísticos: %d\n",npt);



    /*===== CARTA 2 =====*/
    char estado2[20];
    char Codcarta2[20];/*Código da carta*/
    char cidade2[20];/*Nome da cidade*/
    int populacao2;/*Quantidade da População*/
    float km²2;/*Área em quilômetros quadrados*/
    float pib2;/*População Interno Bruto*/
    int npt2;/*Número de pontos turisticos*/

    printf("-----   CARTA NÚMERO 2   -------- \n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codcarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade da populaçao: \n");
    scanf("%d", &populacao2);

    printf("Digite a Àrea em Km²: \n");
    scanf("%f", &km²2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos: \n");
    scanf("%d", &npt2);

    printf("CARTA NÚMERO 2: \n");

    printf("Nome do estado: %s\n",estado2); 
    printf("Código da carta: %s\n",Codcarta2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n",populacao2);
    printf("Àrea: %f\n",km²2);
    printf("PIB: %f\n",pib2);
    printf("Número de Pontos Turísticos: %d\n",npt2);

    return 0;

}