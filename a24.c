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

void diagonald(int **mat, int lin, int col){
    int i, j, soma = 0, soma1 = 0;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(i == j){
                soma += *(*(mat + i) + j);
            }
            else{
                soma1 += *(*(mat + i) + j);
            }
        }
    }
    if(soma > soma1){
        printf("\nMatriz diagonalmente dominante!");
    }
    else{
        printf("\nMatriz nao-diagonalmente dominante!");
    }
}

int main(){

    int i, lin, col;

    printf("Digite o numero de linhas: ");
    scanf("%d", &lin);

    printf("Digite o numero de colunas: ");
    scanf("%d", &col);

    int **mat = (int **)malloc(lin * sizeof(int *));
    for(i = 0; i < lin; i++){
        mat[i] = (int *)malloc(col * sizeof(int));
    }

    preencher(mat, lin, col);
    exibir(mat, lin, col);
    diagonald(mat, lin, col);

    return 0;
}