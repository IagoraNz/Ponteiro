#include <stdio.h>
#include <stdlib.h>

//Verificar se a diagonal principal de uma matriz preenchida é 1 e os demais 0

int identidade(int **mat, int lin, int col){
    int i, j, fail = 0, fail2 = 0;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(i == j){//Diagonal principal
                if(*(*(mat + i) + j) == 1){
                    continue;
                }
                else{
                    fail++; //Contador para caso alguma número não satisfaça a condição
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

    if(fail == 0 && fail2 == 0){//Se nenhuma falha for encontrada, a matriz é encontrada 
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

    if(identidade(mat, lin, col)){//Uma vez true(1)
        printf("\nMatriz identidade encontrada!");//Printa
    }
    else{
        printf("\nMatriz identidade nao encontrada!");
    }

    return 0;
}