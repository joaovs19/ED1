#include <stdio.h>

/*aça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII
de cada caractere da palavra. Imprima a string resultante. */

int main(){
	char str[50];

	fgets(str, 50, stdin);

	for (int i = 0; str[i] != '\0'; i++){
		str[i] = str[i] +1;
	}

	printf("%s", str);

	return 0;
}