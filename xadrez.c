#include <stdio.h>
 
int main() {
//primeiro passo declaração de variaveis
    int populacao, turistico,Populacao1, Turistico1;
    char carta[20],cidade[20],estado,Carta1[20],Cidade1[20],Estado1;
    float pib, area,Pib1, Area1;
//coletando os dados da primeira carta
    printf("Vamos cadastrar os dados da carta1: \n");
    printf("digite o estado:Uma letra de 'A' a 'H': \n");
    scanf("%c",&estado);

    printf("digite o codigo da carta: A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s",carta);

    printf("digite o nome da cidade: \n");
    scanf("%s",cidade);
    
    printf("digite a quantidade de habitantes: \n");
    scanf("%d",&populacao);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f",&area);

    printf("digite o Produto Interno Bruto da cidade(pib): \n");
    scanf("%f",&pib);

    printf("digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d",&turistico);

//coletando os dados da primeira carta
    printf("Vamos cadastrar os dados da carta 2: \n");
    printf("digite o estado:Uma letra de 'A' a 'H': \n");
    scanf("%c",&Estado1);

    printf("digite o codigo da carta: A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s",Carta1);

    printf("digite o nome da cidade: \n");
    scanf("%s",Cidade1);
    
    printf("digite a quantidade de habitantes: \n");
    scanf("%d",&Populacao1);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f",&Area1);

    printf("digite o Produto Interno Bruto da cidade(pib): \n");
    scanf("%f",&Pib1);

    printf("digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d",&Turistico1);

//imprimimdo os dados da carta 1
    printf("Carta 1:\n");
    printf("Estado:%c\n",estado);
    printf("Código:%s\n",carta);
    printf("Nome da Cidade:%s\n",cidade);
    printf("População:%d\n",populacao);
    printf("Área:%f\n",area);
    printf("PIB:%f\n",pib);
    printf("Número de Pontos Turísticos:%d\n",turistico);
//imprimimdo os dados da carta 2
    printf("Estado:%c\n",Estado1);
    printf("Código:%s\n",Carta1);
    printf("Nome da Cidade:%s\n",Cidade1);
    printf("População:%d\n",Populacao1);
    printf("Área:%f\n",Area1);
    printf("PIB:%f\n",Pib1);
    printf("Número de Pontos Turísticos:%d\n",Turistico1);

return 0;
}