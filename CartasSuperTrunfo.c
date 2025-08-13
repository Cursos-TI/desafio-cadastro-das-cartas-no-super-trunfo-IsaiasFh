#include <stdio.h>

int main(){
    /*====  CARTA 1  ====*/
    char estado[20]; /*Nome do estado*/
    char Codcarta[20]; /*Código da carta*/
    char cidade[20]; /*Nome da cidade*/
    unsigned long int populacao; /*Quantidade da População*/
    float area; /*Área em quilômetros quadrados*/
    float pib; /*População Interno Bruto*/
    int npt; /*Número de pontos turisticos*/
    float Dp; /*Densidade Populacional*/
    float PIBpc; /*PIB per capita*/
    float calcular_super_poder(); {
    // Inverso da densidade populacional: se for zero, evitar divisão por zero
    float inverso_densidade = (Dp != 0) ? (1.0 / Dp) : 0;
    return (float) populacao + area + pib + npt + PIBpc + inverso_densidade;
}

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
    scanf("%f", &area);
  
    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib);
   
    printf("Qual a quantidade de pontos turísticos: \n");
    scanf("%d", &npt);

    
    printf("RESULTADO CARTA NÚMERO 1: \n");

    Dp = (float) populacao / area;
    PIBpc  = (float) pib / populacao; 
    
    printf("Nome do estado: %s\n",estado); 
    printf("Código da carta: %s\n",Codcarta);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Àrea: %f\n",area, "km²");
    printf("PIB: %f\n", pib, "bilhões de reais");
    printf("Número de Pontos Turísticos: %d\n",npt);
    printf("O valor da Densidade Populacional é: %.2f hab/km²\n" , Dp);
    printf("Valor do PIB per capita: %.2f reais\n ", PIBpc);



    /*===== CARTA 2 =====*/
    char estado2[20]; /*Nome do estado*/
    char Codcarta2[20]; /*Código da carta*/
    char cidade2[20]; /*Nome da cidade*/
    unsigned long int populacao2; /*Quantidade da População*/
    float area2; /*Área em quilômetros quadrados*/
    float pib2; /*População Interno Bruto*/
    int npt2; /*Número de pontos turisticos*/
    float Dp2; /*Densidade Populacional*/
    float PIBpc2; /*PIB per capita*/
   float calcular_super_poder2(); {
    // Inverso da densidade populacional: se for zero, evitar divisão por zero
    float inverso_densidade2 = (Dp2 != 0) ? (1.0 / Dp2) : 0;
    return (float) populacao2 + area2 + pib2 + npt2 + PIBpc2 + inverso_densidade2;
}

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
    scanf("%f", &area2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos: \n");
    scanf("%d", &npt2);

    printf("RESULTADO CARTA NÚMERO 2: \n");

    Dp2 = (float) populacao2 / area2;
    PIBpc2  = (float) pib2 / populacao2;


    printf("Nome do estado: %s\n", estado2); 
    printf("Código da carta: %s\n", Codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Àrea: %2.f\n", area2, "km²");
    printf("PIB: %f\n", pib2, "bilhões de reais");
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("O valor da Densidade Populacional é: %.2f hab/km²\n" , Dp2);
    printf("Valor do PIB per capita: %f reais\n ", PIBpc2);

    /*Comparação de Cartas*/
     float comparacao1, comparacao2, comparacao3, comparacao4, 
           comparacao5, comparacao6;
    
    comparacao1 = populacao > populacao2;
    comparacao2 = area > area2;
    comparacao3 = pib > pib2;
    comparacao4 = npt > npt2;
    comparacao5 = Dp > Dp2;
    comparacao6 = PIBpc > PIBpc2;

    /*Resultado das comparações*/
    printf("COMPARAÇÃO DE CARTAS:");
    
    printf("População: Carta 1 venceu (%d)\n"), comparacao1;
    printf("Área: Carta 1 venceu(%d)\n"), comparacao2;      
    printf("PIB: Carta 1 venceu(%d)\n"), comparacao3;
    printf(" Pontos Turísticos: Carta 1 venceu(%d)\n"), comparacao4;
    printf("Densidade Populacional: Carta 2 venceu(%d)\n"), comparacao5;
    printf(" PIB per Capita: Carta 1 venceu(%d)\n"), comparacao6;
    printf(" Super Poder: Carta 1 venceu(%d)\n"), comparacao1;

    return 0;

}