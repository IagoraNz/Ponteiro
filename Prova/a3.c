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

    printf("\nMatriz preenchida: \n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

void principal(int **mat, int lin, int col){
    int i, j, soma1 = 0;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(i == j){
                soma1 += *(*(mat + i) + j);
            }
        }
    }
    printf("\nA soma da diagonal principal: %d", soma1);
}

void secundaria(int **mat, int lin, int col){
    int i, soma2 = 0;

    for(i = 0; i < lin; i++){
        soma2 += *(*(mat + i) + col - 1 - i);
    }
    printf("\nA soma da diagonal secundaria: %d", soma2);
}

int main(){

    int i, lin, col;

    printf("Digita o tamanho de linhas: ");
    scanf("%d", &lin);

    printf("Digite o tamanho de colunas: ");
    scanf("%d", &col);

    if(lin == col){
        int **mat = (int **)malloc(lin * sizeof(int *));
        for(i = 0; i < lin; i++){
            mat[i] = (int *)malloc(col * sizeof(int));
        }
        preencher(mat, lin, col);
        exibir(mat, lin, col);

        principal(mat, lin, col);
        secundaria(mat, lin, col);
    }
    else{
        printf("A matriz deve ser quadrada!");
    }

    return 0;
}