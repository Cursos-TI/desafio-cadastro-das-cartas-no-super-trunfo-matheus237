#include <stdio.h>

int main() {

 //carta A01:

    char Estado[50];
    char Numero_da_carta[50];
    char cidade[50];
    int Populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("Digite seu estado: \n");
    scanf("%s", &Estado);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua população: \n");
    scanf("%d", &Populacao);

    printf("Digite sua área por km²: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Digite seu número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Digite o código da carta: \n");
    scanf("%s", &Numero_da_carta);

    printf("Obrigado, agora vamo pra 2° carta!! \n \n");

    //carta A02:

    char Estado_2[50];
    char Numero_da_carta_2[50];
    char cidade_2[50];
    int Populacao_2;
    float area_2;
    float PIB_2;
    int pontosturisticos_2;

    printf("Digite seu estado: \n");
    scanf("%s", &Estado_2);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade_2);
    
    printf("Digite sua população: \n");
    scanf("%d", &Populacao_2);

    printf("Digite sua área por km²: \n");
    scanf("%f", &area_2);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB_2);

    printf("Digite seu número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos_2);

    printf("Digite o código da carta: \n");
    scanf("%s", &Numero_da_carta_2);

    //cartas A01 e A02

    printf("Essas são suas cartas: \n \n");

    //carta A01

    printf("Carta: 1 \n \n");
    printf("Estado: %s \n", Estado);
    printf("Codigo da carta: %s \n", Numero_da_carta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %f km² \n",area);
    printf("PIB: %f bilhões de reais \n",PIB);
    printf("Número de pontos turistícos: %d \n \n",pontosturisticos);

    //carta A02

    printf("Carta: 2 \n");
    printf("Estado: %s \n", Estado_2);
    printf("Codigo da carta: %s \n", Numero_da_carta_2);
    printf("Nome da cidade: %s \n", cidade_2);
    printf("População: %d \n", Populacao_2);
    printf("Área: %f km² \n",area_2);
    printf("PIB: %f reais \n",PIB_2);
    printf("Número de pontos turistícos: %d \n",pontosturisticos_2);




    return 0;
}
