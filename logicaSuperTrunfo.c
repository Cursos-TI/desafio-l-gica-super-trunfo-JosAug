#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main () {
    //Atributos
    char nome1[20], codigo1[10], nome2 [20], codigo2 [10];
    float area1, pib1, area2, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2, ppc1, ppc2;
    unsigned long int populacao1, populacao2;
    double poder1,poder2;

    //Dados cidade 1:
    printf("Digite o nome da cidade 1:\n");
    scanf("%s", nome1);

    printf("Digite o código da cidade 1:\n");
    scanf("%s", codigo1);

    printf("Digite a area em km² da cidade 1:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1:\n");
    scanf("%f", &pib1);

    printf("Digite a população da cidade 1:\n");
    scanf("%lu", &populacao1);

    printf("Digite o numero de pontos turisticos da cidade 1:\n");
    scanf("%i", &turistico1);


    //Dados cidade 2:
printf("Digite o nome da cidade 2:\n");
    scanf("%s", nome2);

    printf("Digite o código da cidade 2:\n");
    scanf("%s", codigo2);

    printf("Digite a area em km² da cidade 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &pib2);

    printf("Digite a população da cidade 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite o numero de pontos turisticos da cidade 2:\n");
    scanf("%i", &turistico2);

    //Densidade populacional e PIB per capita:
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    ppc1= populacao1 / pib1;
    ppc2= populacao2 / pib2;

    //Calculo Super poder:
    poder1 = (float)(populacao1 + area1 + pib1 + turistico1 + ppc1)/ densidade1 ;
    poder2 = (float)(populacao2 + area2 + pib2 + turistico2 + ppc2)/ densidade2 ;
    // Exibição dos Dados das Cartas:
   
    //Exibe Cidade 1:
    printf("Cidade 1:\n");
    printf("Nome da cidade: %s\n", nome1);
    printf("Código: %s\n", codigo1);
    printf("Área:%.3f\n", area1);
    printf("PIB:%.3f\n", pib1);
    printf("Populaçao:%lu\n", populacao1);
    printf("Pontos turisticos:%i\n", turistico1);
    printf("Densidade populacional:%.2f\n",densidade1);
    printf("PIB per capita:%.2f\n", ppc1);
    printf("Poder:%.3f\n", poder1);

    //Exibe Cidade 2:
    printf ("Cidade 2:\n");
    printf("Nome da cidade:%s\n", nome2 );
    printf("Codigo:%2s\n", codigo2) ;
    printf("Área:%.3f\n", area2);
    printf("PIB:%.3f\n", pib2);
    printf("Populaçao:%lu\n", populacao2);
    printf("Pontos turisticos:%i\n", turistico2);
    printf("Densidade populacional:%.2f\n",densidade2);
    printf("PIB per capita:%.2f\n", ppc1); 
    printf("Poder:%.3f\n", poder2);

    //Comparação das Cartas
    printf("***Vencedor***\n");
    printf("Área da cidade 1 é maior?%i\n", area1>area2);
    printf("PIB da cidade 1 é maior?%i\n", pib1>pib2);
    printf("Populaçao da cidade 1 é maior?%i\n", populacao1>populacao2);
    printf("A cidade 1 tem mais Pontos Turisticos?%i\n", turistico1>turistico2);
    printf("A densidade populacional da cidade 1 é maior?%i\n", densidade1>densidade2);
    printf("O PIB per capita da cidade 1 é maior?%i\n",pib1>pib2);
    printf("O Poder da cidade1 é maior?%i\n", poder1>poder2);

    //Comparando a populaçao e quem é o vencedor entre elas
    printf ("Comparação de cartas - Atributo: Populaçao:\n");
    printf ("A cidade 1 tem: %i Habitantes\n", populacao1);
    printf ("A cidade 2 tem: %i Habitantes\n", populacao2);

    
    if (populacao1 > populacao2) {
        printf ("A cidade 1 venceu!\n");
    } else {
        printf ("A cidade 2 venceu!\n");
    }
    
    return 0;
}