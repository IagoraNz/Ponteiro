#include <stdio.h>
#include <stdlib.h>

//Inverta uma matriz dinamicamente alocada

void preencher(int **mat, int lin, int col);
void exibir(int **mat, int lin, int col);
void inverter(int **mat, int lin, int col);

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

    printf("\nMatriz invertida: \n");
    inverter(mat, lin, col);

    for(i = 0; i < lin; i++){
        free(mat[i]);
    }
    free(mat);

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
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void inverter(int **mat, int lin, int col){
    int i, j;

    for(i = lin - 1; i >= 0; i--){
        for(j = col - 1; j >= 0; j--){
            printf("%d ", mat[i][j]);            
        }
        printf("\n");
    }
}