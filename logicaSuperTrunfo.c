#include <stdio.h>

int main() {
    int populacao = 785368, turismo = 23;
    float area = 167.40, pib = 23.80, densidade = 4691.56, capita = 30304.26;
    char estado = 'A', cidade[50] = "Natal", codigo[50] = "A01";
    int populacao2 = 2570000, turismo2 = 15;
    float area2 = 693.44, pib2 = 62.95, densidade2 = 3700.82, capita2 = 244941.63;
    char estado2 = 'B', cidade2[50] = "Salvador", codigo2[50] = "B02";
    float poder = 820555.02, poder2 = 2819413.84;

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km/²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos %d \n", turismo);
    printf("Densidade Populacional %.2f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", capita);
    printf("Super Poder: %.2f \n", poder);

    printf ("\n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km/²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f \n", capita2);
    printf("Super Poder: %.2f \n", poder2);

    printf ("\n");
    printf("População: Carta 2 venceu: %d\n", populacao > populacao2);
    printf("Área: Carta 2 venceu: %d\n", area > area2);
    printf("PIB: Carta 2 venceu: %d\n", pib > pib2);
    printf("Número de Pontos Turísticos: Carta 1 venceu: %d\n", turismo > turismo2);
    printf("Densidade Populacional: Carta 2 venceu: %d\n", densidade > densidade2);
    printf("PIB per Capita: Carta 2 venceu: %d\n", capita > capita2);
    printf("Super Poder: Carta 2 venceu: %d\n", poder > poder2);
    printf ("\n");

    printf ("Carta 1 - Natal (RN): 785368\n");
    printf ("Carta 2 - Salvador (BH): 2570000\n");

if (populacao > populacao2) {
        printf("Carta 1 venceu!\n");
    } else if (populacao < populacao2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }

return 0;
} 
