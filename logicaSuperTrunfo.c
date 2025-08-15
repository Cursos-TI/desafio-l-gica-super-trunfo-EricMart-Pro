#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //Aqui estão as variáveis da Carta 1
    char Estado01;
    char Codigo01 [4];
    char NomeCity01 [50];
    unsigned long int Populacao01;
    float Area01;
    float PIB01;
    int PontosTuristicos01;
    float DensidadePopulacional01;//Essa é a variavél do tipo float onde será armazenado um valor decimal referente à Densidade Populacional da carta 1
    float PIBperCapita01;//Essa é a variavél do tipo float onde será armazenado um valor decimal referente ao PIB per Capita da Carta 1


    //Aqui estão as variáveis da Carta 02
    char Estado02;
    char Codigo02 [4];
    char NomeCity02 [50];
    unsigned long int Populacao02;
    float Area02;
    float PIB02;
    int PontosTuristicos02;
    float DensidadePopulacional02;//Essa é a variavél do tipo float onde será armazenado um valor decimal referente à Densidade Populacional da carta 2
    float PIBperCapita02;//Essa é a variavél do tipo float onde será armazenado um valor decimal referente ao PIB per Capita da Carta 2
   

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    //Aqui eu utlizei printf e scanf para exibir solicitações e guarda-las nas variáveis.
    printf("Digite a letra do Estado da carta 1: "); //utilizei printf para enviar uma mensagem solicitando a letra do Estado.
    scanf(" %c", &Estado01);//utilizei scanf para guardar a informação na variável Estado01
    //utilizei printf e scanf para basicamente as mesmas finalidades abaixo.

    printf("Digite o código da carta 1: ");
    scanf("%s", &Codigo01);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", &NomeCity01);

    printf("Digite o número de habitantes da carta 1: ");
    scanf("%lu", &Populacao01);

    printf("Digite a área em km² da carta 1: ");
    scanf("%f", &Area01);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &PIB01);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &PontosTuristicos01);

    DensidadePopulacional01 = (float) Populacao01 / Area01;//Vou dividir População por Área para chegar à densidade populacional, eu usei casting para transformar os dados da população e da área em dados decimais antes da divisão e o resultado da divisão vai ser atribuido à variavél densidade da carta 1

    PIBperCapita01 = (float) PIB01 / Populacao01;//Usei o casting para transformar os dados da população e do PIB em dados decimais antes da divisão e o resultado da divisão vai ser atribuido à variavél PIBperCapita da carta 1

    printf("Digite a letra do Estado da carta 2: ");
    scanf(" %c", &Estado02);

    printf("Digite o código da carta 2: ");
    scanf("%s", &Codigo02);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", &NomeCity02);

    printf("Digite o número de habitantes da carta 2: ");
    scanf("%lu", &Populacao02);

    printf("Digite a área em km² da carta 2: ");
    scanf("%f", &Area02);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &PIB02);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &PontosTuristicos02);

    DensidadePopulacional02 = (float) Populacao02 / Area02;//Aqui eu usei casting para transformar os dados da população e da área em dados decimais antes da divisão e o resultado da divisão vai ser atribuido à variavél densidade da carta 2
    PIBperCapita02 = (float) PIB02 / Populacao02;//Usei o casting para transformar os dados da população e do PIB em dados decimais antes da divisão e o resultado da divisão vai ser atribuido à variavél PIBperCapita da carta 2



    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (poulação01 > população02) {

        printf("Cidade 1 tem maior população.\n");

    }else {
        printf("Cidade 2 tem maior população.\n")
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
