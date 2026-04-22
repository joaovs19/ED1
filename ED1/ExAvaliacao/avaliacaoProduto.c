#include <stdio.h>
#include <stdlib.h>

int *alocar(int n);
void preencher(int *v, int t);
void relatorio(int *v, int t);
void desalocar(int **v);

int main(){
	int *p1=NULL, *p2=NULL, *p3=NULL, *p4=NULL, *p5=NULL;
	int t1, t2, t3, t4, t5;
	int op=1;

	while(op!=5){
		printf("\n1-Alocar\n2-Preencher\n3-Relatorio\n4-Desalocar\n5-Sair\n");
		scanf("%d", &op);

		switch(op){
			case 1:
				if(p1==NULL){
					printf("Quantidade produto 1: ");
					scanf("%d", &t1);
					p1 = alocar(t1);
				}
				if(p2==NULL){
					printf("Quantidade produto 2: ");
					scanf("%d", &t2);
					p2 = alocar(t2);
				}
				if(p3==NULL){
					printf("Quantidade produto 3: ");
					scanf("%d", &t3);
					p3 = alocar(t3);
				}
				if(p4==NULL){
					printf("Quantidade produto 4: ");
					scanf("%d", &t4);
					p4 = alocar(t4);
				}
				if(p5==NULL){
					printf("Quantidade produto 5: ");
					scanf("%d", &t5);
					p5 = alocar(t5);
				} break;

			case 2:
				printf("\nProduto 1\n");
				preencher(p1,t1);
				printf("\nProduto 2\n");
				preencher(p2,t2);
				printf("\nProduto 3\n");
				preencher(p3,t3);
				printf("\nProduto 4\n");
				preencher(p4,t4);
				printf("\nProduto 5\n");
				preencher(p5,t5);
				break;

			case 3:
			    if(p1 != NULL){ printf("\nProduto 1\n"); relatorio(p1,t1); }
			    else printf("Produto 1 nao alocado!\n");

			    if(p2 != NULL){ printf("\nProduto 2\n"); relatorio(p2,t2); }
			    else printf("Produto 2 nao alocado!\n");

			    if(p3 != NULL){ printf("\nProduto 3\n"); relatorio(p3,t3); }
			    else printf("Produto 3 nao alocado!\n");

			    if(p4 != NULL){ printf("\nProduto 4\n"); relatorio(p4,t4); }
			    else printf("Produto 4 nao alocado!\n");

			    if(p5 != NULL){ printf("\nProduto 5\n"); relatorio(p5,t5); }
			    else printf("Produto 5 nao alocado!\n");
			break;

			case 4:
				desalocar(&p1);
				desalocar(&p2);
				desalocar(&p3);
				desalocar(&p4);
				desalocar(&p5);
				break;

			case 5:
				printf("Fim!");
				break;
		}
	}
}

int *alocar(int n){
	return (int*) malloc(sizeof(int)*n);
}

void preencher(int *v, int t){
	int i, nota;
	for(i=0; i<t; i++){
		do{
			printf("Nota 1-4: ");
			scanf("%d", &nota);

			if(nota < 1 || nota > 4){
				printf("Valor invalido! informe um numero entre 1 e 4\n")
			}
			
		} while(nota <1 || nota > 4);
		*(v+i)=nota;
	}
}

void relatorio(int *v, int t){
	int i, o=0, b=0, r=0, ru=0;

	for(i=0; i<t; i++){
		if(*(v+i)==1) o++;
		else
			if(*(v+i)==2)b++;
			else
				if(*(v+i)==3)r++;
				else
					ru++;
	}
	printf("Otimo:%d\nBom:%d\nRegular:%d\nRuim:%d\n", o, b, r, ru);
}

void desalocar(int **v){
	free(*v);
	*v=NULL;
}