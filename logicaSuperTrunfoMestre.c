#include <stdio.h>

// Desafio Lógica Super Trunfo - Murillo :)

// Variaveis

char estado[50];
char codigo[50];
char nomecidade[50];
unsigned long int populacao;
float area;
float pib;
int turisticos;
float densidade;
float pibpcap;

char estado2[50]; 
char codigo2[50]; 
char nomecidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int turisticos2;
float densidade2;
float pibpcap2;

// Pegar o valor de uma carta/atributo de acordo com o que o usuário escolher

float getValor(int atributo, int carta) {
    float valor = 0;

    if (atributo == 1) { // População
        if (carta == 1) {
            valor = populacao;
        } else {
            valor = populacao2;
        }
    } else if (atributo == 2) { // Área
        if (carta == 1) {
            valor = area;
        } else {
            valor = area2;
        }
    } else if (atributo == 3) { // PIB
        if (carta == 1) {
            valor = pib;
        } else {
            valor = pib2;
        }
    } else if (atributo == 4) { // Pontos turísticos
        if (carta == 1) {
            valor = turisticos;
        } else {
            valor = turisticos2;
        }
    } else if (atributo == 5) { // Densidade
        if (carta == 1) {
            valor = densidade;
        } else {
            valor = densidade2;
        }
    } else if (atributo == 6) { // PIB per capita
        if (carta == 1) {
            valor = pibpcap;
        } else {
            valor = pibpcap2;
        }
    }

    return valor;
}

int main() {
    int atributo1;
    int atributo2;
    float valor_atributo1_carta1, valor_atributo1_carta2;
    float valor_atributo2_carta1, valor_atributo2_carta2;
    float valor_modificado1_carta1, valor_modificado1_carta2;
    float valor_modificado2_carta1, valor_modificado2_carta2;
    float soma_carta1, soma_carta2;

    printf("Desafio Super Trunfo! :)\n\n");

    // Cadastro da carta 1

    printf("Insira as informacoes da sua primeira carta\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado);
    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade);
    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao);
    printf("Digite o tamanho da area: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turisticos);

    densidade = populacao / area;
    pibpcap = pib / populacao;

    printf("\nCarta 01 cadastrada!\n\n");

    // Cadastro da carta 2

    printf("Insira as informacoes da sua segunda carta\n");
    printf("Digite o nome do segundo estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o codigo da segunda carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao2);
    printf("Digite o tamanho da segunda area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turisticos2);

    densidade2 = populacao2 / area2;
    pibpcap2 = pib2 / populacao2;

    printf("\nCarta 02 cadastrada!\n\n");

    // Menu de escolha dos atributos

    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional (MENOR vence)\n");
    printf("6. PIB per capita\n");
    scanf("%d", &atributo1);

    // Menu para o segundo atributo

    do {
        printf("Escolha o segundo atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 6; i++) {
            if (i != atributo1) {
                switch (i) {
                    case 1: printf("1. Populacao\n"); break;
                    case 2: printf("2. Area\n"); break;
                    case 3: printf("3. PIB\n"); break;
                    case 4: printf("4. Pontos Turisticos\n"); break;
                    case 5: printf("5. Densidade Populacional\n"); break;
                    case 6: printf("6. PIB per capita\n"); break;
                }
            }
        }
        scanf("%d", &atributo2);

        if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6) {
            printf("Opcao invalida. Escolha um atributo diferente do primeiro.\n");
        }
    } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6);

    // Getvalor

    valor_atributo1_carta1 = getValor(atributo1, 1);
    valor_atributo1_carta2 = getValor(atributo1, 2);
    valor_atributo2_carta1 = getValor(atributo2, 1);
    valor_atributo2_carta2 = getValor(atributo2, 2);

    // Quanto menor a densidade = melhor: 
    
    valor_modificado1_carta1 = (atributo1 == 5) ? -valor_atributo1_carta1 : valor_atributo1_carta1;
    valor_modificado1_carta2 = (atributo1 == 5) ? -valor_atributo1_carta2 : valor_atributo1_carta2;
    valor_modificado2_carta1 = (atributo2 == 5) ? -valor_atributo2_carta1 : valor_atributo2_carta1;
    valor_modificado2_carta2 = (atributo2 == 5) ? -valor_atributo2_carta2 : valor_atributo2_carta2;

    soma_carta1 = valor_modificado1_carta1 + valor_modificado2_carta1;
    soma_carta2 = valor_modificado1_carta2 + valor_modificado2_carta2;

    // Exibição dos resultados

    printf("Resultado:  \n");

    printf("Carta 1 (%s)\n", nomecidade);
    printf("Atributo %d: %.2f\n", atributo1, valor_atributo1_carta1);
    printf("Atributo %d: %.2f\n", atributo2, valor_atributo2_carta1);
    printf("Soma total: %.2f\n\n", soma_carta1);

    printf("Carta 2 (%s)\n", nomecidade2);
    printf("Atributo %d: %.2f\n", atributo1, valor_atributo1_carta2);
    printf("Atributo %d: %.2f\n", atributo2, valor_atributo2_carta2);
    printf("Soma total: %.2f\n\n", soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("O Vencedor foi: %s\n", nomecidade);
    } else if (soma_carta2 > soma_carta1) {
        printf("O vencedor foi: %s\n", nomecidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
