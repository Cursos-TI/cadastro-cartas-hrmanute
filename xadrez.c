#include <stdio.h>
 
int main() {

    int populacao, turistico;
    char carta[50],cidade[50];
    char estado;
    float pib, area;

    printf("digite o estado: \n");
    scanf("%s", estado);

    printf("digite a cidade: \n");
    scanf("%s", cidade);

    printf("digite o pib: \n");
    scanf("%d", &pib);

    printf("digite a area km: \n");
    scanf("%f", &area);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turistico);

    printf("digite a quantidade de habitantes: \n");
    scanf("%d", &populacao);

    printf("digite o codigo da carta: \n");
    scanf("%s", carta);


return 0;
}