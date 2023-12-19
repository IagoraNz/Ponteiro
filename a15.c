#include <stdio.h>
#include <stdlib.h>

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

void transposta(int **mat, int lin, int col){
    int i, j, mat2[lin][col];

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            mat2[i][j] = mat[j][i];
        }
    }
    printf("\nMatriz transposta: \n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d ", mat2[i][j]);
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
    printf("Matriz original: \n");
    exibir(mat, lin, col);
    transposta(mat, lin, col);

    return 0;
}