#include <stdio.h>

/*Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma de
5 alunos. O programa deve solicitar ao usuário os nomes do aluno, sempre perguntando
se ele deseja inserir mais um nome na lista. Uma vez lidos todos os alunos, o usuário ira
indicar um nome que ele deseja verificar se está presente na lista, onde o programa deve
procurar pelo nome (ou parte deste nome) e se encontrar deve exibir na tela o nome
completo e o índice do vetor onde esta guardada este nome. */

int main(){
    char nomes[5][50], busca[50];
    int n=0;

    do{
        fgets(nomes[n],50,stdin);
        n++;
        printf("Continuar? (1/0): ");
        int op;
        scanf("%d",&op);
        getchar();
        if(!op) break;
    }while(n<5);

    fgets(busca,50,stdin);

    for(int i=0;i<n;i++){
        int j=0;
        while(busca[j]!='\0' && nomes[i][j]==busca[j]){
            j++;
        }
        if(busca[j]=='\0'){
            printf("Encontrado em %d: %s",i,nomes[i]);
        }
    }
}