#include <stdio.h>
#include <stdlib.h>

void preencher(float **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%f", &*(*(mat + i) + j));
        }
    }
}

void exibir(float **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%.1f\t", *(*(mat + i) + j));
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

    float **mat = (float **)malloc(lin * sizeof(float *));
    for(i = 0; i < lin; i++){
        mat[i] = (float *)malloc(col * sizeof(float));
    }

    preencher(mat, lin, col);
    printf("\nMatriz alocada: \n");
    exibir(mat, lin, col);

    printf("Digite o novo tamanho de linhas: ");
    scanf("%d", &lin);

    printf("Digite o novo tamanho de colunas: ");
    scanf("%d", &col);

    mat = (float **)realloc(mat, lin * sizeof(float *));
    for(i = 0; i < lin; i++){
        mat[i] = (float *)realloc(mat[i], lin * sizeof(float));
    }

    preencher(mat, lin, col);
    printf("\nMatriz realocada: \n");
    exibir(mat, lin, col);

    for(i = 0; i < lin; i++){
        free(mat[i]);
    }
    free(mat);

    return 0;
}