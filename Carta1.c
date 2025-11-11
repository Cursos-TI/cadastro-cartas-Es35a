#include <stdio.h>
int main(){
    char Estado1;
    char Codigo[10];
    char Nomedacidade1[20];
    int Populacao;
    float Area;
    float Pib;
    int Pontosturisticos;

    printf("Digite o estado1: \n");
    scanf("%s", &Estado1);

    printf("Digite o codigo: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade1: \n");
    scanf("%s", &Nomedacidade1);

    printf("Digite populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a are1: \n");
    scanf("%f", &Area);

    printf("Didite o pib1: \n");
    scanf("%f", &Pib);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &Pontosturisticos);

    printf("Estado1: %s - Nome da cidade: %s - Codigo: %s", Estado1, Nomedacidade1, Codigo );
    printf("Populacao: %d - Area: %f - Pib: %f - Pontosturisticos: %d", Populacao, Area, Pib, Pontosturisticos);

    return 0;


}