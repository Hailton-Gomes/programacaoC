#include <stdio.h>
int main (){
/*O presente programa possibilita ao usuário a inserção dos dados de duas cartas do jogo Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações: estado, código da carta, nome da cidade, população, área (em km²), PIB e quantidade de pontos turísticos.*/

    //solicitando os dados da primeira carta.
    printf("Dados da carta 1\n");
    
    //criando variáveis para a inserção da carta 1 e 2, através da entrada de dados pelo usuário:
        char estado;
        printf("Digite o Estado da carta 1 (uma letra de 'A' a 'H'): ");
        scanf(" %c", &estado);
        char codigo_da_carta[4];
        printf("Digite o código da carta 1 (letra do Estado e número de 01 a 04, ex: A01, C02):");
        scanf("%s", codigo_da_carta);
        char nome_da_cidade[50];
        printf("Digite a cidade da carta 1 (cidades com mais de uma palavra escrever tudo junto. ex: SãoPaulo):");
        scanf(" %s", nome_da_cidade);
        int populacao;
        printf("Digite a população da carta 1:");
        scanf("%d", &populacao);
        float area;
        printf("Digite a área da carta 1 (em Km²):");
        scanf("%f", &area);
        float PIB;
        printf("Digite o PIB da carta 1:");
        scanf("%f", &PIB);
        int pontos_turisticos;
        printf("Digite a quantidade de pontos turísticos da carta 1:");
        scanf("%d", &pontos_turisticos);

    //solicitando os dados da segunda carta.
    printf("Dados da carta 2\n");
    
        char estado_2;
        printf("Digite o Estado da carta 2 (uma letra de 'A' a 'H'): ");
        scanf(" %c", &estado_2);
        char codigo_da_carta_2[4];
        printf("Digite o código da carta 2 (letra do Estado e número de 01 a 04, ex: A01, C02):");
        scanf("%s", codigo_da_carta_2);
        char nome_da_cidade_2[50];
        printf("Digite a cidade da carta 2 (cidades com mais de uma palavra escrever tudo junto. ex: SãoPaulo):");
        scanf("%s", nome_da_cidade_2);
        int populacao_2;
        printf("Digite a população da carta 2:");
        scanf("%d", &populacao_2);
        float area_2;
        printf("Digite a área da carta 2 (em Km²):");
        scanf("%f", &area_2);
        float PIB_2;
        printf("Digite o PIB da carta 2:");
        scanf("%f", &PIB_2);
        int pontos_turisticos_2;
        printf("Digite a quantidade de pontos turísticos da carta 2:");
        scanf("%d", &pontos_turisticos_2);

        printf("------ Carta 1 ------\n");
        printf("Estado: %c\n", estado);
        printf("Código da carta: %s\n", codigo_da_carta);
        printf("Nome da cidade: %s\n", nome_da_cidade);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f reais\n", PIB);
        printf("Pontos turísticos: %d\n", pontos_turisticos);
        printf("________________________________\n");
        printf("------ Carta 2 ------\n");
        printf("Estado: %c\n", estado_2);
        printf("Código da carta: %s\n", codigo_da_carta_2);
        printf("Nome da cidade: %s\n", nome_da_cidade_2);
        printf("População: %d habitantes\n", populacao_2);
        printf("Área: %.2f km²\n", area_2);
        printf("PIB: %.2f reais\n", PIB_2);
        printf("Pontos turísticos: %d\n", pontos_turisticos_2);



return 0;    
}