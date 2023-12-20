#include <stdio.h>
#include <stdlib.h>

//Pega o elemento do centro da matriz e multiplica toda a matriz pelo valor armazenado nela

void preencher(int **mat, int lin, int col);
void exibir(int **mat, int lin, int col);
void mult(int **mat, int lin, int col);

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

        preencher(mat, lin, col);
        printf("\nMatriz: \n");
        exibir(mat, lin, col);

        mult(mat, lin, col);

        for(i = 0; i < lin; i++){
            free(mat[i]);
        }
        free(mat);
    }
    else{
        printf("\nA matriz deve ser impar!");
    }

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

void mult(int **mat, int lin, int col){
    int i, j, valor;

    for(i = 0; i < lin; i++){
        for(j = 0; j < lin; j++){
            if(i == lin / 2 && j == col / 2){
                valor = mat[i][j];
            }
        }
    }

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            mat[i][j] *= valor;
        }
    }
    printf("\nNova matriz: \n");
    exibir(mat, lin, col);
}