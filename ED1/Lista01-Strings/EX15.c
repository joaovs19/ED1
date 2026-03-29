#include <stdio.h>

/*Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica:
subtraia 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

int main(){
	char str[100];

	fgets(str, 100, stdin);

	for(int i =0; str[i] != '\0'; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}
	}

	printf("%s", str);

	return 0;
}