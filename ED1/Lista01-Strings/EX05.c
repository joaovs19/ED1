#include <stdio.h>

//Digite nome, calcule e retorne quantas letras tem esse nome.

int main(){
	char nome[100];
	int i = 0;

	printf("Digite o nome: \n");
	fgets(nome, 100, stdin);

	while(nome[i] != '\0'){
		i++;
	}

	printf("Quantidade de letras: %d\n", i -1);

	return 0;
}