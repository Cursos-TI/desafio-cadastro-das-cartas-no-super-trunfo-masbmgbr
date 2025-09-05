#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Definicao das variaveis
    char Carta1Estado;
    char Carta1Codigo[3];
    char Carta1NomeCidade[50];
    int Carta1Populacao;
    float Carta1Area;
    float Carta1PIB;
    int Carta1Pturisticos;

    char Carta2Estado;
    char Carta2Codigo[3];
    char Carta2NomeCidade[50];    
    int Carta2Populacao;
    float Carta2Area;
    float Carta2PIB;
    int Carta2Pturisticos;
     
    // Cadastro das Cartas
    printf("Super Trunfo\n\n");

    // Carta 1
    printf("Entre os dados para Carta 1:\n");
    printf("Estado: ");
    scanf("%c", &Carta1Estado);
    printf("Codigo: (A99) ");
    scanf("%s", &Carta1Codigo);

    printf("Cidade: ");
    fgets(Carta1NomeCidade, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
    Carta1NomeCidade[strcspn(Carta1NomeCidade, "\n")] = 0; //  remove '\n' na string
    
    printf("População: ");
    scanf("%d", &Carta1Populacao);
    printf("Área: ");
    scanf("%f", &Carta1Area);
    printf("PIP: ");
    scanf("%f", &Carta1PIB);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &Carta1Pturisticos);

    // Carta 2
    printf("\nEntre os dados para Carta 2:\n");
    printf("Estado: ");
    scanf("%s", &Carta2Estado);
    printf("Codigo: (A99) ");
    scanf("%s", &Carta2Codigo);

    printf("Cidade: ");
    fgets(Carta2NomeCidade, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
    Carta2NomeCidade[strcspn(Carta2NomeCidade, "\n")] = 0; //  remove '\n' na string
    
    printf("População: ");
    scanf("%d", &Carta2Populacao);
    printf("Área: ");
    scanf("%f", &Carta2Area);
    printf("PIP: ");
    scanf("%f", &Carta2PIB);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &Carta2Pturisticos);

    // Exibição dos Dados das Cartas:
    printf("Dados da Carta 1:\n");
    printf("Estado: %c\n", Carta1Estado);
    printf("Codigo: %s\n",Carta1Codigo);
    printf("Cidade: %s\n",Carta1NomeCidade);
    printf("População: %d\n",Carta1Populacao);
    printf("Área: %f\n", Carta1Area);
    printf("PIP: %f\n",Carta1PIB);
    printf("Quantidade de Pontos Turísticos: %d\n",Carta1Pturisticos);

    printf("Dados da Carta 2:\n");
    printf("Estado: %c\n", Carta2Estado);
    printf("Codigo: %s\n",Carta2Codigo);
    printf("Cidade: %s\n",Carta2NomeCidade);
    printf("População: %d\n",Carta2Populacao);
    printf("Área: %f\n", Carta2Area);
    printf("PIP: %f\n",Carta2PIB);
    printf("Quantidade de Pontos Turísticos: %d\n",Carta2Pturisticos);
    return 0;
}
