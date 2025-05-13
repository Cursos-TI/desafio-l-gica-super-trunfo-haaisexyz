#include <stdio.h>

// Desafio Logica Super Trunfo - Murillo :)

int main()
{

    int opcao; // variavel de opcao que vai ser utilizada no switch na ultima parte do codigo

    // Cidade 01

    char estado[50];
    char codigo[50];
    char nomecidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float pibpcap; // Abreviei pib per capita para nao ficar tao grande nas variaveis!

    // Cidade 02

    char estado2[50];
    char codigo2[50];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    int turisticos2;
    float pib2;
    float densidade2;
    float pibpcap2; // Abreviei pib per capita para nao ficar tao grande nas variaveis!

    // Explicacao para o usuario + adicionar as informacoes da cidade 01

    printf("Desafio Super Trunfo! :)\n");
    printf("\n");
    printf("Insira as informacoes da sua primeira carta");
    printf("\n");

    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado);

    printf("Digite o codigo da carta: \n");
    scanf(" %[^\n]", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%lu", &populacao);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turisticos);

    // Calculo da densidade populacional(1)
    densidade = populacao / area; // Cidade 01

    // Calculo do pib per capita (1)
    pibpcap = pib / populacao; // Cidade 01

    // Respostas cidade 01

    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nomecidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade);
    printf("PIB per capita: %.3f reais\n", pibpcap);
    printf("\n");
    printf("Carta 01 cadastrada!\n");
    printf("\n");

    // Adicionar as informacoes da cidade 02
    printf("\n");
    printf("Insira as informacoes da sua segunda carta");
    printf("\n");

    printf("Digite o nome do segundo estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Digite o codigo da segunda carta: \n");
    scanf(" %[^\n]", codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da segunda area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turisticos2);

    // Calculo da densidade populacional (2)
    densidade2 = populacao2 / area2; // Cidade 02

    // Calculo do pib per capita (2)
    pibpcap2 = pib2 / populacao2; // Cidade 02

    // Respostas cidade 02

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade2);
    printf("PIB per capita: %.3f reais\n", pibpcap2);
    printf("\n");
    printf("Carta 02 cadastrada!\n");
    printf("\n");

    // Interface para que o usuario escolha o que deseja comparar

    printf("Escolha a opcao na qual deseja fazer a comparacao\n");
    printf("1.  Comparar populacao\n");
    printf("2.  Comparar area\n");
    printf("3.  Comparar PIB\n");
    printf("4.  Comparar pontos turisticos\n");
    printf("5.  Comparar densidade populacional\n"); // (Menor = melhor)
    printf("6.  Comparar PIB per capita\n");
    scanf("%d", &opcao); // para fazer a leitura da int opcao

    // Aba de switch e comparacoes

    switch (opcao)
    {
    case 1: // OPCAO 1 
        printf("Comparando POPULACAO:\n");
        printf("%s: %lu habitantes\n", nomecidade, populacao);
        printf("%s: %lu habitantes\n", nomecidade2, populacao2);

        if (populacao > populacao2)
        {
            printf("%s venceu (Populacao)\n", nomecidade);
        }
        else if (populacao2 > populacao)
        {
            printf("%s venceu (Populacao)\n", nomecidade2);
        }
        else
        {
            printf("Empate no quesito POPULACAO\n");
        }
        break;

    case 2: // OPCAO 2 
        printf("Comparando AREA:\n");
        printf("%s: %f km²\n", nomecidade, area);
        printf("%s: %f km²\n", nomecidade2, area2);

        if (area > area2)
        {
            printf("%s venceu (Area)\n", nomecidade);
        }
        else if (area2 > area)
        {
            printf("%s venceu (Area)\n", nomecidade2);
        }
        else
        {
            printf("Empate no quesito AREA\n");
        }
        break;

    case 3: // OPCAO 3 
        printf("Comparando PIB:\n");
        printf("%s: %.4f R$\n", nomecidade, pib);
        printf("%s: %.4f R$\n", nomecidade2, pib2);

        if (pib > pib2)
        {
            printf("%s venceu (PIB)\n", nomecidade);
        }
        else if (pib2 > pib)
        {
            printf("%s venceu (PIB)\n", nomecidade2);
        }
        else
        {
            printf("Empate no quesito PIB\n");
        }
        break;

    case 4: // OPCAO 4 
        printf("Comparando PONTOS TURISTICOS:\n");
        printf("%s: %d Pontos Turisticos\n", nomecidade, turisticos);
        printf("%s: %d Pontos Turisticos\n", nomecidade2, turisticos2);

        if (turisticos > turisticos2)
        {
            printf("%s venceu (Pontos turisticos)\n", nomecidade);
        }
        else if (turisticos2 > turisticos)
        {
            printf("%s venceu (Pontos turisticos)\n", nomecidade2);
        }
        else
        {
            printf("Empate no quesito PONTOS TURISTICOS\n");
        }
        break;

    case 5: // OPCAO 5 
        printf("Comparando DENSIDADE POPULACIONAL:\n");
        printf("%s: %.4f habitantes por km2\n", nomecidade, densidade);
        printf("%s: %.4f habitantes por km2\n", nomecidade2, densidade2);

        if (densidade < densidade2)
        {
            printf("%s venceu (Densidade populacional)\n", nomecidade);
        }
        else if (densidade2 < densidade)
        {
            printf("%s venceu (Densidade populacional)\n", nomecidade2);
        }
        else
        {
            printf("Empate no quesito DENSIDADE POPULACIONAL\n");
        }
        break;

    case 6: // OPCAO 6 
        printf("Comparando PIB PER CAPITA:\n");
        printf("%s: %.4f R$\n", nomecidade, pibpcap);
        printf("%s: %.4f R$\n", nomecidade2, pibpcap2);
        if (pibpcap > pibpcap2)
        {
            printf("%s venceu (PIB per capita)\n", nomecidade);
        }
        else if (pibpcap2 > pibpcap)
        {
            printf("%s venceu (PIB per capita)\n", nomecidade2);
        }
        else
        {
            printf("Empate no quesito PIB PER CAPITA\n");
        }
        break;

    default: // Caso nenhuma opcao valida seja pressionada (por exemplo o 7, tendo em vista que o 6 é a ultima opção válida)
        printf("Opcao invalida");
        break;
    }

    return 0;
}
