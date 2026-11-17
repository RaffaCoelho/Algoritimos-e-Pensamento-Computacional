#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[30];
	int numero [1000], tipo;
	float saldo;
	
} Carteira;


int main(){
	
	Carteira clientes[100];
	
	int quantidade = 0, opcao, i;
	float saldoTotal = 0;
	
	
	do {
		
	printf("==================================================\n");
	printf("               Carteira Bank                      \n");
	printf("            1 - Abrir Carteira                  \n");
	printf("            2 - Consutar Carteira                  \n");
	printf("            3 - Sair                 \n");
	scanf("%i", & opcao);

	
	switch (opcao){
		case 1: 
		
			printf("==================================================\n");
			printf("           Cadastre o primeiro Cliente            \n");
			printf("==================================================\n");
			if(quantidade < 5){
				
				printf("Qual o nome do %i Cliente\n",i);
				scanf("%s",&clientes[quantidade].nome);
				
				printf("A conta desse Cliente e %d\n", clientes[quantidade].numero+1);
				
				printf("O tipo da conta é 1(Conta Corrente) 2(Conta Poupança) 3(Conta Salario)\n");
				scanf("%i", &clientes[quantidade].tipo);
				
				printf("Informe o saldo da conta: \n");
				scanf("%.2f",&clientes[quantidade].saldo);
		}
				
		break;
	
		case 2: 
			saldoTotal = saldoTotal + clientes[quantidade].saldo;
			quantidade = quantidade +  1;
			
			printf("==================================================\n");
			printf("          Valores da Carteira Bank            \n");
			printf("==================================================\n");
		
			printf("A quantidade de Clientes é: %i\n", quantidade);
			printf("O saldo da Carteira Bank é: R$%.2f\n", saldoTotal);
		break;
		
		case 3: 
			printf("Saindo...\n");
		break;
		
		default:
			printf("Opção invalida!\n");
		break;
			
	}
	
	}while(opcao != 3);
	
	printf("==================================================\n");
	printf("            Saida Realizada Com Sucesso           \n");
	printf("==================================================\n");
	
	return 0;
}
