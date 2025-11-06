#include <stdio.h>
 
int main() {
//primeiro passo declaração de variaveis
    int populacao, turistico,populacao1, turistico1;
    char carta[50],cidade[50],carta1[50],cidade1[50];
    char estado,estado1;
    float pib, area,pib1, area1;
//coletando os dados da primeira carta
    printf("Vamos cadastrar os dados da carta1: \n");
    printf("digite o estado:Uma letra de 'A' a 'H': \n");
    scanf("%s", &estado);

    printf("digite o codigo da carta: A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &carta);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade);
    
    printf("digite a quantidade de habitantes: \n");
    scanf("%d", &populacao);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("digite o Produto Interno Bruto da cidade(pib): \n");
    scanf("%f", &pib1);

    printf("digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turistico);

//coletando os dados da primeira carta
    printf("Vamos cadastrar os dados da carta 2: \n");
    printf("digite o estado:Uma letra de 'A' a 'H': \n");
    scanf("%s", &estado1);

    printf("digite o codigo da carta: A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &carta1);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    
    printf("digite a quantidade de habitantes: \n");
    scanf("%d", &populacao1);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("digite o Produto Interno Bruto da cidade(pib): \n");
    scanf("%f", &pib1);

    printf("digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turistico1);

//imprimimdo os dados da carta 1
    printf("Carta 1:\n");
    printf("Estado:%s\n",estado);
    printf("Código:%s\n",carta);
    printf("Nome da Cidade:%s\n",cidade);
    printf("População:%d\n",populacao);
    printf("Área:%f\n",area);
    printf("PIB:%fn",pib);
    printf("Número de Pontos Turísticos:%d\n",turistico);
//imprimimdo os dados da carta 2
    printf("Estado:%s\n",estado1);
    printf("Código:%s\n",carta1);
    printf("Nome da Cidade:%s\n",cidade1);
    printf("População:%d\n",populacao1);
    printf("Área:%f\n",area1);
    printf("PIB:%fn",pib1);
    printf("Número de Pontos Turísticos:%d\n",turistico1);

return 0;
}