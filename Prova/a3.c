#include <stdio.h>
#include <stdlib.h>

void preenchercomzero(int **mat, int lin, int col) {
    int i, j;

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            *(*(mat + i) + j) = 0;
        }
    }

    printf("Matriz com zeros: \n");
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

void preencher(int **mat, int lin, int col){
    int i, j, k = 1;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++, k++){
            *(*(mat + i) + j) = k; //k está incrementando no for
        }
    }

    printf("Matriz preenchida: \n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main(){

    int lin, col, i;

    printf("Digite o tamanho de linhas: ");
    scanf("%d", &lin);

    printf("Digite o tamanho de colunas: ");
    scanf("%d", &col);

    int **mat = (int **)malloc(lin * sizeof(int *));
    for(i = 0; i < lin; i++){
        mat[i] = (int *)malloc(col * sizeof(int));
    }

    preenchercomzero(mat, lin, col);
    preencher(mat, lin, col);

    for(i = 0; i < lin; i++){
        free(mat[i]);
    }
    free(mat);

    return 0;
}