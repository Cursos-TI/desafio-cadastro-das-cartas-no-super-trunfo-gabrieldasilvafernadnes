#include <stdio.h>

int main(){
    // Super trunfo
    
    // Variaveis
    char estado;
    char codigo;
    char cidade[15];
    int populacao;
    float area;
    float pib;
    int number_turisticos;

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Pegando informações da primeira carta
    printf("Sua primeira carta \n");

    printf("Número da carta: ");
    scanf("%d", &codigo);

    printf("Estado (Uma letra de A à H): ");
    scanf(" %c", &estado);
    
    printf("Escreva nome de uma cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Números de Pontos Turisticos: ");
    scanf("%d", &number_turisticos);
    
    printf("Sua carta \n \n");

    // Trancrevendo para o usúario
    printf("Carta: %d \n Estado: %c \n Código: %c%i \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Número de Pontos Turísticos: %d \n", codigo, estado, estado, codigo, cidade, populacao, area, pib, number_turisticos);

    // Criando a sua segunda carta
    printf("\n Criando sua segunda carta \n");

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Processo de criação de carta
    printf("Número da carta: ");
    scanf("%d", &codigo);

    printf("Estado (Uma letra de A à H): ");
    scanf(" %c", &estado);
    
    printf("Escreva nome de uma cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Números de Pontos Turisticos: ");
    scanf("%d", &number_turisticos);
    
    printf("Sua carta \n \n");

    // Trancrevendo para o usúario
    printf("Carta: %d \n Estado: %c \n Código: %c%i \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Número de Pontos Turísticos: %d \n", codigo, estado, estado, codigo, cidade, populacao, area, pib, number_turisticos);

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    return 0;
}