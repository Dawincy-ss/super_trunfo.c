#include <stdio.h>
    int main(){

// variaveis

    char estado1[100], estado2[100];    
    char codigo1[5], codigo2[5];          
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2, percapita1, percapita2; // variaveis referentes a dencidade populacional e ao PIB per capita, respectivamente.

    

    printf("Bem-Vindo ao Super Trunfo city's! \n");
    printf("Para poder jogar é nescessario o cadastramento de cartas, onde nelas irão conter as seguintes informações: \n 1° Estado (Apenas a sigla)\n 2° Codigo da carta (Que deve começar com a letra da inicial do estado)\n 3° Nome da Cidade\n 4° População\n 5° Area em km²\n 6° PIB(Produto Interno Bruto)\n 7° Número de pontos turisticos \n");
    printf("Bom, entendendo como funciona vamos para a proxíma fase!\n Cadastre a baixo as suas cartas!\n Seja curioso! Não cadastre cidades muito conhecidas! \n");

 //Entrada de dados digitados pelo jogador:   
    
    //carta 1

        printf("CARTA 01\n");
        printf("Digite o Estado: \n");
        scanf("%s", &estado1);

        printf("Digite o codigo da cidade: \n ");
        scanf("%s", &codigo1);

        printf("Digite o Nome da cidade: \n");
        scanf("%s", &cidade1);

        printf("Digite a população: \n");
        scanf("%d", &populacao1);

        printf("Digite a area: \n");
        scanf("%f", &area1);

        printf("Digite o PIB: \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontos1);

    // carta 2


        printf("CARTA 02\n");
        printf("Digite o Estado: \n");
        scanf("%s", &estado2);

        printf("Digite o codigo da cidade: \n ");
        scanf("%s", &codigo2);

        printf("Digite o Nome da cidade: \n");
        scanf("%s", &cidade2);

        printf("Digite a população: \n");
        scanf("%d", &populacao2);

        printf("Digite a area: \n");
        scanf("%f", &area2);

        printf("Digite o PIB: \n");
        scanf("%f", &pib2);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontos2);


        // Cálculo de densidade populacional:

        densidade1 = populacao1 / area1;

        densidade2 = populacao2 / area2;

        // Cálculo de PIB per Capita:

        percapita1 = (pib1 * 1000000000) / populacao1;

        percapita2 = (pib2 * 1000000000) / populacao2;






// resultado (saida):

        //carta 01A

        printf("Carta 01: \n");
        printf("Estado: %s \n", estado1);
        printf("Codigo: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("População: %d \n", populacao1);
        printf("Area: %.2f km²\n", area1);
        printf("PIB: %.2f Bilhões\n", pib1);
        printf("Pontos Turisticos: %d \n", pontos1);
        printf("Densidade Populacional: %.2f Hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", percapita1);
        
        //carta 02

        printf("\n");
        printf("Carta 02: \n");
        printf("Estado: %s \n", estado2);
        printf("Codigo: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("Area: %.2f km²\n", area2);
        printf("PIB: %.2f Bilhões\n", pib2);
        printf("Pontos Turisticos: %d \n", pontos2);
        printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", percapita2);


        return 0;







    }