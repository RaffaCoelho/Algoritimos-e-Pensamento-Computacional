#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[50];
	int idade;
	float altura;
} Pessoa;

int main(){
	
	Pessoa p1;
	
	strcpy(p1.nome, "Rafael");
	p1.idade = 24;
	p1.altura = 1.83;
	
	printf("Nome: %s\nIdade: %i\nAltura: %.3f", p1.nome, p1.idade, p1.altura);
	
	return 0;
}
