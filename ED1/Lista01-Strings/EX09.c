#include <stdio.h>

/*Entre com um nome e imprima o nome somente se a primeira letra do nome for “a”
(maiúscula ou minúscula).*/

int main(){
	char nome[100];

	fgets(nome, 100, stdin);

	if(nome[0] == 'a' || nome[0] == 'A')
		printf("%s", nome);

	return 0;
}