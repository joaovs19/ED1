#include <stdio.h>

//Crie um programa que compara duas strings (não use a função ao strcmp)

int main(){
	char resposta[]="BRANCO";
	char resp[40];
	int i, igual;

	printf("Qual é a cor do cavalo branco de Napoleão?\n");
	fgets(resp,40,stdin);

	while(1){
		for (int i = 0; resp[i] != '\0'; i++) {
			if(resp[i] == '\n'){
				resp[i] = '\0';
				break;
		}
	}

	igual = 1;
	for(i = 0; resposta[i] != '\0' || resp[i] != '\0'; i++){
		if(resposta[i] != resp[i]){
			igual = 0;
			break;
		}
	}

	if(igual){
		break;
	}

	printf("Resposta errada. Tente novamente\n");
	fgets(resp, 40, stdin);

	}

	printf("Correto!\n");

	return 0;

}