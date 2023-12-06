#include <stdio.h>
#include <stdlib.h>

int identidade(int **mat, int lin, int col){
    int i, j, fail = 0, fail2 = 0;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(i == j){
                if(*(*(mat + i) + j) == 1){
                    continue;
                }
                else{
                    fail++;
                }
            }
            else{
                if(*(*(mat + i) + j) == 0){
                    continue;
                }
                else{
                    fail2++;
                }
            }
        }
    }

    if(fail == 0 && fail2 == 0){
        return 1;
    }
    else{
        return 0;
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
    printf("Matriz: \n");
    exibir(mat, lin, col);

    if(identidade(mat, lin, col)){
        printf("\nMatriz identidade encontrada!");
    }
    else{
        printf("\nMatriz identidade nao encontrada!");
    }

    return 0;
}