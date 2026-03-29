#include <stdio.h>

/*Faça um programa que preencha um vetor com os modelos de cinco carros (exemplos
de modelos: Fusca, Gol, Vectra, etc.). Preencha outro vetor com o consumo desses
carros, isto é, quantos quilómetros cada um deles faz com um litro de combustível.
Calcule e mostre: (a) O modelo de carro mais econômico; (b) Quantos litros de
combustível cada um dos carros cadastrados consomem para percorrer uma distancia de
1.000 quilômetros.*/

int main(){
	char modelo[5][20];
	float consumo[5];
	int melhor = 0;

	for(int i = 0; i < 5; i++){
		printf("Modelo: ");
		scanf("%s", modelo[i]);

		printf("Km/L: ");
		scanf("%f", &consumo[i]);

		if(consumo[i] > consumo[melhor]){
			melhor = i;
		}
	}

	printf("Mais economico: %s\n", modelo[melhor]);

	for(int i=0; i < 5; i++){
		float litros = 1000 / consumo[i];
		printf("%s consome %.2f litros\n", modelo[i], litros);
	}

	return 0;
}