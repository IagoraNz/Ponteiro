#include <stdio.h>
#include <stdlib.h>

//Dada um matriz quadrada, passar um índice com parâmetro e dobrar o valor dessa linha

void preencher(int **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &*(*(mat + i) + j));
        }
    }
}

void exibir(int **mat, int lin, int col){

    int i, j;

    printf("Matriz: \n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

void trocarlinha(int **mat, int lin, int col, int index){
    int i, j;

    for(i = 0; i < lin; i++){
        if(i == index){
            for(j = 0; j < lin; j++){ //Aqui ele só altera a coluna na condição de i == index
                *(*(mat + i) + j) *= 2; //Pelo seu dobro
            }
        }
    }
    exibir(mat, lin, col); //Função dentro de uma função
}

int main(){

    int i, lin, col, linha;

    printf("Digite o numero de linhas: ");
    scanf("%d", &lin);

    printf("Digite o numero de colunas: ");
    scanf("%d", &col);

    if(lin == col){
        int **mat = (int **)malloc(lin * sizeof(int *));
        for(i = 0; i < lin; i++){
            mat[i] = (int *)malloc(col * sizeof(int));
        }

        preencher(mat, lin, col);
        exibir(mat, lin, col);

        printf("Digite a linha que deseja modificar: ");
        scanf("%d", &linha);

        trocarlinha(mat, lin, col, linha);

    }
    else{
        printf("A matriz deve ser quadrada");
    }
    return 0;
}
