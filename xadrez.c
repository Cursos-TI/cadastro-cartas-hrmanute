#include <stdio.h>
 
int main() {
//primeiro passo declaração de variaveis
    int populacao,turistico,populacao1,turistico1;
    char carta[20],cidade[20],carta1[20],cidade1[20];
    char estado,estado1;
    float pib,area,pib1,area1,densidade,pibcapita,densidade1,pibcapita1;
//coletando os dados da primeira carta
    printf("Vamos cadastrar os dados da carta1: \n");
    printf("digite o estado:Uma letra de 'A' a 'H': \n");
    scanf(" %c",&estado);

    printf("digite o codigo da carta: A letra do estado seguida de um número de 01 a 04: \n");
    scanf(" %s",carta);

    printf("digite o nome da cidade: \n");
    scanf(" %s",cidade);

    printf("digite a quantidade de habitantes: \n");
    scanf(" %d",&populacao);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f",&area);

    printf("digite o Produto Interno Bruto da cidade(pib): \n");
    scanf(" %f",&pib);

    printf("digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d",&turistico);

//coletando os dados da primeira carta
    printf("Vamos cadastrar os dados da carta 2:\n");
    printf("digite o estado:Uma letra de 'A' a 'H':\n");
    scanf(" %c",&estado1);

    printf("digite o codigo da carta: A letra do estado seguida de um número de 01 a 04:\n");
    scanf(" %s",carta1);

    printf("digite o nome da cidade:\n");
    scanf(" %s",cidade1);   

    printf("digite a quantidade de habitantes:\n");
    scanf(" %d",&populacao1);

    printf("digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f",&area1);

    printf("digite o Produto Interno Bruto da cidade(pib):\n");
    scanf(" %f",&pib1);

    printf("digite a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d",&turistico1);
    
//incrementação da parte logica do programa
    densidade=(float)populacao/area;
    densidade1=(float)populacao1/area1;
    pibcapita=(float)pib/populacao;
    pibcapita1=(float)pib1/populacao1;



    //imprimimdo os dados da carta 1
    printf("Carta 1:\n");
    printf("Estado:%c\n",estado);
    printf("Código:%s\n",carta);
    printf("Nome da Cidade:%s\n",cidade);
    printf("População:%d\n",populacao);
    printf("Área:%f\n",area);
    printf("PIB:%f\n",pib);
    printf("Número de Pontos Turísticos:%d\n",turistico);
    printf("Densidade populacional:%.2f\n",densidade);
    printf("Pib per capita:%.2f\n",pibcapita);
//imprimimdo os dados da carta 2
    printf("Estado:%c\n",estado1);
    printf("Código:%s\n",carta1);
    printf("Nome da Cidade:%s\n",cidade1);
    printf("População:%d\n",populacao1);
    printf("Área:%f\n",area1);
    printf("PIB:%f\n",pib1);
    printf("Número de Pontos Turísticos:%d\n",turistico1);
    printf("Densidade populacional:%.2f\n",densidade1);
    printf("Pib per capita:%.2f\n",pibcapita1);
return 0;
}