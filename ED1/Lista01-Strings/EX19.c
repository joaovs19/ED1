#include <stdio.h>

/*Escreva um programa que leia a idade e o primeiro nome de varias pessoas. Seu
programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu
programa deve escrever o nome e a idade das pessoas mais jovens e mais velhas.*/

int main(){
	char nome[50], jovem[50], velho[50];
	int idade, menor = 999, maior = -1;

	while(1){
		printf("Nome: ");
		scanf("%s", nome);

		printf("Idade: ");
		scanf("%d", &idade);

		if(idade < 0) break;

		if(idade < menor){
			menor = idade;
			sprintf(jovem, "%s", nome);
		}

		if(idade > maior){
			maior = idade;
			sprintf(velho, "%s", nome);
		}
	}

	printf("Mais jovem: %s (%d)\n", jovem, menor);
	printf("Mais velho: %s (%d)\n", velho, maior);

	return 0;
}