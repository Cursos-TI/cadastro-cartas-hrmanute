#include <stdio.h>
 
int main() {
//primeiro passo declaração de variaveis
    int populacao, turistico,Populacao, Turistico;
    char carta[2],cidade[20],Carta[2],Cidade[20];
    char estado[2],Estado[2];
    float pib, area,Pib, Area;
//coletando os dados da primeira carta
    printf("Vamos cadastrar os dados da carta1: \n");
    printf("digite o estado:Uma letra de 'A' a 'H': \n");
    scanf("%s", estado);

    printf("digite o codigo da carta: A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", carta);

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade);
    
    printf("digite a quantidade de habitantes: \n");
    scanf("%d", &populacao);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("digite o Produto Interno Bruto da cidade(pib): \n");
    scanf("%f", &pib);

    printf("digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turistico);

//coletando os dados da primeira carta
    printf("Vamos cadastrar os dados da carta 2: \n");
    printf("digite o estado:Uma letra de 'A' a 'H': \n");
    scanf("%s", Estado);

    printf("digite o codigo da carta: A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", Carta);

    printf("digite o nome da cidade: \n");
    scanf("%s", Cidade);
    
    printf("digite a quantidade de habitantes: \n");
    scanf("%d", &Populacao);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &Area);

    printf("digite o Produto Interno Bruto da cidade(pib): \n");
    scanf("%f", &Pib);

    printf("digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Turistico);

//imprimimdo os dados da carta 1
    printf("Carta 1:\n");
    printf("Estado:%s\n",estado);
    printf("Código:%s\n",carta);
    printf("Nome da Cidade:%s\n",cidade);
    printf("População:%d\n",populacao);
    printf("Área:%f\n",area);
    printf("PIB:%f\n",pib);
    printf("Número de Pontos Turísticos:%d\n",turistico);
//imprimimdo os dados da carta 2
    printf("Estado:%s\n",Estado);
    printf("Código:%s\n",Carta);
    printf("Nome da Cidade:%s\n",Cidade);
    printf("População:%d\n",Populacao);
    printf("Área:%f\n",Area);
    printf("PIB:%f\n",Pib);
    printf("Número de Pontos Turísticos:%d\n",Turistico);

return 0;
}