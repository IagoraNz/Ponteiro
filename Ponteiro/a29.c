#include <stdio.h>
#include <stdlib.h>

void cruz(int **mat, int lin, int col);
void exibir(int **mat, int lin, int col);

int main(){

    int i, lin, col;

    printf("Digite o tamanho de linhas: ");
    scanf("%d", &lin);

    printf("Digite o tamanho de colunas: ");
    scanf("%d", &col);

    if((lin * col) % 2 == 1){
        int **mat = (int **)malloc(lin * sizeof(int *));
        for(i = 0; i < lin; i++){
            mat[i] = (int *)malloc(col * sizeof(int));
        }

        cruz(mat, lin, col);

        for(i = 0; i < lin; i++){
            free(mat[i]);
        }
        free(mat);
    }
    else{
        printf("Matriz deve ser impar!");
    }

    return 0;
}

void cruz(int **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(i == lin / 2 || j == col / 2){
                mat[i][j] = 1;
            }
            else{
                mat[i][j] = 0;
            }
        }
    }
    exibir(mat, lin, col);
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