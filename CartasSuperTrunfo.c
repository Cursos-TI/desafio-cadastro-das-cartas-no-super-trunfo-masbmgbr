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
    printf("Entre os dados para Carta 1:\n");
    printf("Estado: ");
    scanf("%s", &Carta1Estado);
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



    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
