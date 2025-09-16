#include <stdio.h>

int main() {
    // dados da primeira carta
    printf("Digite os dados da 1ª carta\n");
    printf("*Carta 1:\n");
    char estado;
        printf("Digite o Estado da carta:\n");
        scanf("%c", &estado);

    char codigo[3];
        printf("Digite o código da carta:\n");
        scanf("%s", codigo);

    char cidade[20];
        printf("Digite a cidade da carta:\n");
        scanf("%s", cidade);

    int populacao;
        printf("Digite a população da carta:\n");
        scanf("%d", &populacao);

    float area;
        printf("Digite a área da carta:\n");
        scanf("%f", &area);

    float PIB;
        printf("Digite o PIB da carta:\n");
        scanf("%f", &PIB);

    int pontos_turistico;
        printf("Digite a quantidade de pontos turísticos da carta:\n");
        scanf("%d", &pontos_turistico);

        printf("\n#Carta 1:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f reais\n", PIB);
        printf("Pontos turísticos: %d\n", pontos_turistico);

    return 0;
}
