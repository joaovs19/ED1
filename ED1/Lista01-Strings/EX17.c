#include <stdio.h>

/*Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

int main(){
	char str[100], nova[100];
	int j = 0;

	fgets(str, 100, stdin);

	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] != ' '){
			nova[j++] = str[i];
		}
	}

	nova[j] = '\0';

	printf("%s", nova);

	return 0;
}