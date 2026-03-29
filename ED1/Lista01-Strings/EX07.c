#include <stdio.h>

/*Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo:
0011001 → 3*/

int main(){
	char str[100];
	int cont = 0;

	fgets(str, 100, stdin);

	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == '1')
			cont++;
	}

	printf("Total de 1: %d\n", cont);

	return 0;
}