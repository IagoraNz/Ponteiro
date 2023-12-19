#include <stdio.h>
#include <stdlib.h>

void exibir(int **matriz, int tam){
    int i, j;

    printf("\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
}

void espiral(int **matriz, int tam){
    
    int lin = tam/2, col = tam/2; //Meio da matriz;
    int i, j, num = 1;
    
    matriz[lin][col] = num; //Começa com 1

    for(i = 1; i <= tam; i++){//Quantidade de passos
        for(j = 0; j < i * 2; j++){
        
            if(i % 2 == 1){ //Ímpar
                // A primeira metade dos passos serão das colunas, e o restante será das linhas
                if(j < i) //Na primeira iteracao, j = 0, i = 1, logo, j < i
                    col++; // Passo para direita
                else
                    lin++; // Passo para baixo
            }

            else{ //Par
                if(j < i)
                    col--; // Passo para esquerda
                else
                    lin--; // Passo para cima
            }
            
            if(lin >= tam || col >= tam) //Se estiver fora dos limites da matriz
                break;
            else{ //Caso esteja dentro, poderá inserir o número dentro da matriz
                num++;
                matriz[lin][col] = num;
            }
        }
    }
}

int main(){

    int tam, i;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tam);

    if(tam % 2 == 0)
        printf("Matriz deve ser impar!");

    else{
        int **matriz = (int **)malloc(tam * sizeof(int *));
        for(i = 0; i < tam; i++){
            matriz[i] = (int *)malloc(tam * sizeof(int));
        }

        espiral(matriz, tam);
        exibir(matriz, tam);

        for(i = 0; i < tam; i++){
            free(matriz[i]);
        }
        free(matriz);
    }
    
    return 0;
}