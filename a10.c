#include <stdio.h>
#include <stdlib.h>

void multiplica(int **mat, int **mat2, int lin, int col){
    int i, j;

    int mat3[lin][col];

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            mat3[i][j] = *(*(mat + i) + j) * *(*(mat2 + i) + j);//A mat3 é preenchida com a multiplicação das outras duas matrizes
        }
    }
    
    printf("Matriz resultante: \n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }
}

void preencher(int **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &*(*(mat + i) + j));
        }
    }
}

void exibir(int **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

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
    printf("Matriz 1: \n");
    exibir(mat, lin, col);

    int **mat2 = (int **)malloc(lin * sizeof(int *));
    for(i = 0; i < lin; i++){
        mat2[i] = (int *)malloc(col * sizeof(int));
    }

    preencher(mat2, lin, col);
    printf("Matriz 2: \n");
    exibir(mat2, lin, col);

    multiplica(mat, mat2, lin, col);

    return 0;
}