#include <stdio.h>
#include <stdlib.h>

int *alocar(int n);
void preencher(int *v, int t);
void relatorio(int *v, int t);
void desalocar(int **v);

int main(){
	int *v1=NULL, *v2=NULL, *v3=NULL, *v4=NULL, t1, t2, t3, t4;
	int op = 1;

	while(op != 5){
		printf("\n1-Alocar\n2-Preencher\n3-Relatorio\n4-Desalocar\n5-Sair");
		scanf("%d", &op);

		switch(op){
			case 1:{
				if(v1==NULL){
					printf("\nQuantidade de atendimentos vendedor 1:");
					scanf("%d", &t1);
					v1=alocar(t1);
				}
				if(v2==NULL){
					printf("\nQuantidade de atendimentos vendedor 2:");
					scanf("%d", &t2);
					v2=alocar(t2);
				}
				if(v3==NULL){
					printf("\nQuantidade de atendimentos vendedor 3:");
					scanf("%d", &t3);
					v3=alocar(t3);
				}
				if(v4==NULL){
					printf("\nQuantidade de atendimentos vendedor 4:");
					scanf("%d", &t4);
					v4=alocar(t4);
				}
			} break;
			case 2:{
				printf("\nVendedor 1:\n");
				preencher(v1, t1);
				printf("\nVendedor 2:\n");
				preencher(v2, t2);
				printf("\nVendedor 3:\n");
				preencher(v3, t3);
				printf("\nVendedor 4:\n");
				preencher(v4, t4);
			} break;
			case 3:{
				printf("\nRelatorio vendedor 1:\n");
				relatorio(v1, t1);
				printf("\nRelatorio vendedor 2:\n");
				relatorio(v2, t2);
				printf("\nRelatorio vendedor 3:\n");
				relatorio(v3, t3);
				printf("\nRelatorio vendedor 4:\n");
				relatorio(v4, t4);
			} break;
			case 4:{
				desalocar(&v1);
				desalocar(&v2);
				desalocar(&v3);
				desalocar(&v4);
			} break;
			case 5:{
				printf("Fim!");
			} break;
			default: printf("Opcao invalida!");
		}
	}
}

int *alocar(int n){
	int *v=NULL;
	v = (int *)malloc(sizeof(int)*n);
	return v;
}

void preencher(int *v, int t){
	int i, nota;
	for(i=0; i<t; i++){
		do{
			printf("\n1-Excelente\n2-Bom\n3-Regular\n4-Ruim\nNota:");
			scanf("%d", &nota);
		} while(nota<=0 || nota>4);
		*(v+1) = nota;
	}
}

void relatorio(int *v, int t){
	int ce=0, cb=0, cr=0, crr=0, i;
	for(int i=0; i<t; i++){
		if(*(v+i)==1)
			ce++;
		else
			if(*(v+i)==2)
				cb++;
			else
				if(*(v+i)==3)
					cr++;
				else
					crr++;
	}
	printf("\nExcelente:%d", ce);
	printf("\nBom:%d",cb);
	printf("\nRegular:%d", cr);
	printf("\nRuim:%d", crr);
}

void desalocar(int **v){
	free(*v);
	*v=NULL;
}