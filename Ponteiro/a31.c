#include <stdio.h>
#include <stdlib.h>

//Fazer um código que substitua a diagonal secundária pela soma dos numeros pares de uma matriz

void preencher(int **mat, int lin, int col);
void exibir(int **mat, int lin, int col);
void diag(int **mat, int lin, int col);

int main(){

    int i, lin, col;

    printf("Digite o tamanho de linhas: ");
    scanf("%d", &lin);

    printf("Digite o tamanho de colunas: ");
    scanf("%d", &col);

    int **mat = (int **)malloc(lin * sizeof(int *));
    for(i = 0; i < lin; i++){
        mat[i] = (int *)malloc(col * sizeof(int));
    }

    preencher(mat, lin, col);
    printf("\nMatriz: \n");
    exibir(mat, lin, col);

    diag(mat, lin, col);

    return 0;
}

void preencher(int **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void exibir(int **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void diag(int **mat, int lin, int col){
    int i, j, soma = 0;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(mat[i][j] % 2 == 0){
                soma += mat[i][j];
            }
        }
    }
    for(i = 0; i < lin; i++){
        mat[i][col - 1 - i] = soma;
    }
    printf("\nNova matriz: \n");
    exibir(mat, lin, col);
}