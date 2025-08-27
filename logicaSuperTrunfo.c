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
    // (Repita para cada propriedade)
    //Aqui eu utlizei printf e scanf para exibir solicitações e guarda-las nas variáveis.
    printf("Digite a letra do Estado da carta 1: "); //utilizei printf para enviar uma mensagem solicitando a letra do Estado.
    scanf(" %c", &Estado01);//utilizei scanf para guardar a informação na variável Estado01
    //utilizei printf e scanf para basicamente as mesmas finalidades abaixo.

    printf("Digite o código da carta 1: ");
    scanf("%s", Codigo01);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", NomeCity01);

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
    scanf("%s", Codigo02);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", NomeCity02);

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
    int opcao; //Essa variavel "opção", vai armazenar o número correspondente a um dos atributos que o usuário digitar
    //Exemplo: Temos números de 1 até 6 representando cada um dos atributos disponíveis para comparar como, população (N°1), Área (N°2), PIB (N°3), Número de pontos turísticos (N°4), Densidade Populacional (N°5) e PIB per Capita (N°6)
    //Utilizei printf para imprimir o menu com os números representando cada atributo
    printf("Escolha um atributo para fazer a comparação: \n");
    printf("1. POPULAÇÃO\n");
    printf("2. ÁREA\n");
    printf("3. PIB\n");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5. DENSIDADE POPULACIONAL\n");
    printf("6. PIB PER CAPITA\n");
    printf("Escolha(Digite o número correspondente ao atributo): \n");
    scanf("%d", &opcao); //o scanf vai armazenar na variavél opcao o número que o usuário digitar como um valor inteiro


    // Exemplo:
    //Se o usuário digitar 1, o case 1 vai ser ativado e fará a comparação do atributo escolhido entre as duas cartas através do if, do else e do else-if
    //Temos cases com números de 1 a 6, cada número dos cases a seguir se refere a um valor específico da variavél opcao 
    //Dentro de cada case tem uma função if, else-if e else, as quais estão responsáveis por fazer a comparação entre os atributos da carta 1 e carta 2.
    switch(opcao) {
        case 1:
        printf("Comparação do atributo população: \n");
        if(Populacao01 > Populacao02) { //O if fará uma comparação para descobrir se a população da carta 1 é maior e, se for, imprimirá o nome das cidades, o valor do atributo da carta 1, o valor do atributo da carta 2, uma mensagem dizendo que a carta 1 tem maior valor no atributo selecionado pelo usuário no menu e outra dizendo que ela venceu
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("População da cidade 1: %d - População da cidade 2: %d\n");
            printf("Carta 1 tem maior população\n");
            printf("Carta 1 Venceu\n");
        }else if(Populacao01 < Populacao02) { //O else-if é responsável por fazer uma segunda comparação, para que assim abra portas para imprimir uma mensagem no caso de empate através do else. Se a comparação do else-if for verdadeira (se a população da carta 1 for menor que a população da carta 2), imprimirá o nome das cidades, o valor do atributo da carta 1, o valor do atributo da carta 2, uma mensagem dizendo que a carta 2 tem maior valor no atributo selecionado pelo usuário no menu e outra dizendo que ela venceu
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("População da cidade 1: %d - População da cidade 2: %d\n", Populacao01, Populacao02);
            printf("Carta 2 tem maior população\n");
            printf("Carta 2 Venceu\n");
        }else{ //Caso a comparação do if seja falso e do else-if também seja, o else vai imprimir o nome das cidades, os valores de ambas as cartas correspondente ao atributo escolhido e uma mensagem de empate, uma vez que, o if, nesse caso, seja para descobrir se o atributo da carta 1 tem valor maior que o atributo da carta 2, e o else-if, seja para descobrir se o atributo da carta 1 tem valor menor que o atributo da carta 2
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("População da cidade 1: %d - População da cidade 2: %d\n", Populacao01, Populacao02);
            printf("Empate\n");
        }
        break;
        case 2:
        printf("Comparação do atributo área:\n");
        if(Area01 > Area02) {
             printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
             printf("Área da cidade 1: %d - Área da cidade 2: %d\n", Area01, Area02);
            printf("Carta 1 tem área maior\n");
            printf("Carta 1 Venceu\n");
        } else if( Area01 < Area02) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
             printf("Área da cidade 1: %d - Área da cidade 2: %d\n", Area01, Area02);
            printf("Carta 2 tem área maior\n");
            printf("Carta 2 Venceu\n");
        } else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
             printf("Área da cidade 1: %d - Área da cidade 2: %d\n", Area01, Area02);
            printf("Empate\n");
        }
        break;
        case 3:
        printf("Comparação do atributo PIB: \n");
        if(PIB01 > PIB02) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("PIB da cidade 1: %d - PIB da cidade 2: %d\n", PIB01, PIB02);
            printf("Carta 1 tem maior PIB\n");
            printf("Carta 1 Venceu\n");
        } else if(PIB01 < PIB02) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("PIB da cidade 1: %d - PIB da cidade 2: %d\n", PIB01, PIB02);
            printf("Carta 2 tem maior PIB");
            printf("Carta 2 Venceu\n");
        }else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("PIB da cidade 1: %d - PIB da cidade 2: %d\n", PIB01, PIB02);
            printf("Empate\n");
        }
        break;
        case 4:
        printf("Comparação do atributo de Pontos Turísticos");
        if(PontosTuristicos01 > PontosTuristicos02) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("Número de pontos turísticos da cidade 1: %d - Número de pontos turísticos da cidade 2: %d\n", PontosTuristicos01, PontosTuristicos02);
            printf("Carta 1 tem mais pontos turísticos\n");
            printf("Carta 1 Venceu\n");
        } else if(PontosTuristicos01 < PontosTuristicos02) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("Número de pontos turísticos da cidade 1: %d - Número de pontos turísticos da cidade 2: %d\n", PontosTuristicos01, PontosTuristicos02);
            printf("Carta 2 tem mais pontos turísticos\n");
            printf("Carta 2 Venceu\n");
        } else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("Número de pontos turísticos da cidade 1: %d - Número de pontos turísticos da cidade 2: %d\n", PontosTuristicos01, PontosTuristicos02);
            printf("Empate\n");
        }
        break;
        case 5:
        printf("Comparação do atributo Densidade Populacional: \n");
        if(DensidadePopulacional01 > DensidadePopulacional02){ //Se a densidade populacional da carta 1 for maior que a da carta 2, então imprimirá o nome das cidades como sempre, porém, imprimirá uma mensagem dizendo que a carta 2 tem menor densidade populacional e outra dizendo que ela venceu, pois, quem tem menor valor na densidade populacional vence.
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("Densidade populacional da cidade 1: %d - Densidade populacional da cidade 2: %s\n", DensidadePopulacional01, DensidadePopulacional02);
        printf("Carta 2 tem menor densidade populacional\n");
        printf("Carta 2 Venceu\n");
        }else if(DensidadePopulacional01 < DensidadePopulacional02) { //Se a densidade populacional da carta 1 for menor que a da segunda carta, então imprimirá o nome das cidades, os valores de densidade populacional de ambas as cartas, uma mensagem dizendo que a carta 1 tem menor densidade e outra dizendo que a carta 1 venceu.
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("Densidade populacional da cidade 1: %d - Densidade populacional da cidade 2: %s\n", DensidadePopulacional01, DensidadePopulacional02);
            printf("Carta 1 tem menor densidade populacional\n");
            printf("Carta 1 Venceu\n");
        }else {//Se ambas as densidades, tiverem o mesmo valor, então o else vai imprimir o nome das cidades, os valores do atributo de ambas as cartas e outra mensagem informando empate.
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("Densidade populacional da cidade 1: %d - Densidade populacional da cidade 2: %s\n", DensidadePopulacional01, DensidadePopulacional02);
            printf("Empate\n");
        }
        break; //O break vai marcar o fim da mensagem para cada case
        case 6:
        printf("Comparação do atributo PIB per Capita: \n");
        if(PIBperCapita01 > PIBperCapita02){
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("PIB per Capita da cidade 1: %d - PIB per Capita da cidade 2: %d\n", PIBperCapita01, PIBperCapita02);
            printf("Carta 1 tem maior PIB per Capita\n");
            printf("Carta 1 Venceu\n");
        } else if(PIBperCapita01 < PIBperCapita02){
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("PIB per Capita da cidade 1: %d - PIB per Capita da cidade 2: %d\n", PIBperCapita01, PIBperCapita02);
            printf("Carta 2 tem maior PIB per Capita\n");
            printf("Carta 2 Venceu\n");
        } else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", NomeCity01, NomeCity02);
            printf("PIB per Capita da cidade 1: %d - PIB per Capita da cidade 2: %d\n", PIBperCapita01, PIBperCapita02);
            printf("Empate\n");
        }
        break;
        default: //O default vai ser responsável por imprimir uma mensagem, caso o usuário escolha um valor que não esteja dentro do menu. A mensagem será "Opção inválida, tente novamente".
        printf("Opção inválida, tente novamente");
        break;

    }
     



    return 0;
}
