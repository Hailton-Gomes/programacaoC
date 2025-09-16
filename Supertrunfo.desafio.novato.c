#include <stdio.h>

int main(){
    //dados da primeira carta
    char carta_1 = '1';
        printf("Digite os dados da 1ª carta\n");
        printf("*Carta 1: \n");

        char estado;
        printf("Digite o Estado da carta: \n");
        scanf("%c", &estado);//insira uma letra de 'A' a 'H'
        
        
        char código[3];
        printf("Digite o código da carta: \n");
        scanf("%s", código);
        
        
        char cidade;
        printf("Digite a cidade da carta: \n");
        scanf("%s", cidade);
        
        
        int população;
        printf("Digite a população da carta:\n");  
        scanf("%d", &população);
        
        
        float área;
        printf("Digite a área da carta: \n");
        scanf("%f", área);
        
        
        float PIB;
        printf("Digite o PIB da carta: \n");
        scanf("%f", PIB);
        
        
        int turístico;
        printf("Digite a quantidade de pontos turísticos da carta: \n");
        scanf("%d", turístico);
        
              
        printf("#Carta 1: \n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", código);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d habitantes\n", população);
        printf("Área: %f km²\n", área);
        printf("PIB: %f reais\n", PIB);
        printf("Pontos turísticos: %d\n", turístico);


       
    return 0;
}
