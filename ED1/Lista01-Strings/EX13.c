#include <stdio.h>

/*Ler uma frase e contar quantos caracteres são brancos. Lembre-se que uma frase é um
conjunto de caracteres (vetor). */

int main(){
	char str[100];
	int cont = 0;

	fgets(str, 100, stdin);

	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == ' ')
			cont++;
	}

	printf("Espaços: %d\n", cont);

	return 0;
}