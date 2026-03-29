#include <stdio.h>

/*Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”*/

int main(){
	char nome[50], sexo;
	int idade;

	printf("Nome: \n");
	fgets(nome, 50, stdin);

	printf("Sexo (F/MM): \n");
	scanf("%c", &sexo);

	printf("Idade: ");
	scanf("%d", &idade);

	if ((sexo == 'F' || sexo == 'f') && idade < 25)
		printf("%sAceita\n", nome);
	else
		printf("Não aceita\n");

	return 0;
}