#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    int numero, tipo;
    float saldo;
} Carteira;

int main() {
    int numeroAtual = 1000;
    Carteira clientes[100];

    int quantidade = 0, opcao, i = 0;
    float saldoTotal = 0.0f;

    do {
        printf("==================================================\n");
        printf("               Carteira Bank                      \n");
        printf("            1 - Abrir Carteira                  \n");
        printf("            2 - Consultar Carteira                  \n");
        printf("            3 - Sair                 \n");
        printf("==================================================\n");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                printf("==================================================\n");
                printf("          Cadastre o Cliente            \n");
                printf("==================================================\n");

                if (quantidade < 100) {
                    printf("Qual o nome do cliente %d\n", quantidade + 1);
                    scanf("%29s", clientes[quantidade].nome);

                    clientes[quantidade].numero = numeroAtual++;
                    printf("A conta desse cliente e %d\n", clientes[quantidade].numero);

                    printf("O tipo da conta e 1(Conta Corrente) 2(Conta Poupanca) 3(Conta Salario)\n");
                    scanf("%d", &clientes[quantidade].tipo);

                    printf("Informe o saldo da conta: \n");
                    scanf("%f", &clientes[quantidade].saldo);
                    saldoTotal += clientes[quantidade].saldo;
                    quantidade++;
                } else {
                    printf("Limite de clientes atingido!\n");
                }

                system("pause");
                system("cls");
                break;

            case 2:
                printf("==================================================\n");
                printf("          Valores da Carteira Bank            \n");
                printf("==================================================\n");

                printf("A quantidade de Clientes e: %d\n", quantidade);
                printf("O saldo da Carteira Bank e: R$%.2f\n", saldoTotal);
                system("pause");
                system("cls");
                break;

            case 3:
                printf("Saindo...\n");
                system("cls");
                break;

            default:
                printf("Opcao invalida!\n");
                system("pause");
                break;
        }

    } while (opcao != 3);

    printf("==================================================\n");
    printf("            Saida Realizada Com Sucesso           \n");
    printf("==================================================\n");

    return 0;
}
