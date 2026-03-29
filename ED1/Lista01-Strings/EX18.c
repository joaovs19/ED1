#include <stdio.h>

/*Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

int main(){
	char str[100], l1, l2;

	fgets(str, 100, stdin);

	printf("Letra 01: \n");
	scanf("%c", &l1);

	printf("Letra 02: \n");
	scanf("%c", &l2);

	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == l1)
			str[i] = l2;
	}

	printf("%s", str);

	return 0;
}