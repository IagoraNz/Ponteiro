#include <stdio.h>
#include <stdlib.h>

//Preencher uma matriz dinâmica onde o usuário irá inserir a quantidade alunos e de notas a serem postas
//Na última coluna deverá ser armazenada a média das notas calculada pelo algoritmo
//Além disso, deverá dizer a situação do aluno
//Use funções e programação top-down

void preencher(float **mat, int lin, int col){
    int i, j;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Digite a %d nota do aluno %d: ", j + 1, i + 1);
            scanf("%f", &*(*(mat + i) + j));
        }
    }
}

void media(float **mat, int lin, int col){
    
    int i, j;
    float soma = 0, media;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            soma += *(*(mat + i) + j);
        }
        media = soma / col;
        mat[i][col] = media; //Como a matriz já está preenchida, a última coluna será a média
        soma = 0;
    }
}

void tabela(float **mat, int lin, int col){
    int i, j;

    printf("Aluno\t");
    for(i = 0; i < col; i++){
        printf("Nota %d\t", i + 1); //Insere uma coluna para cada nota
    }
    printf("Media\tSituacao\n");

    for(i = 0; i < lin; i++){

        printf("%d\t", i + 1); //Printa o aluno
        for(j = 0; j < col + 1; j++){
            printf("%.2f\t", mat[i][j]); //Printa as notas e a média
        }

        if(mat[i][col] >= 7){ //mat[i][col] é a média
            printf("Aprovado\n");
        }
        else if(mat[i][col] >= 5){
            printf("Recuperacao\n");
        }
        else{
            printf("Reprovado\n");
        }
    }
}

int main(){

    int i, alunos, notas;

    printf("Digite a quantidade alunos: ");
    scanf("%d", &alunos);

    printf("Digite a quantidade de notas: ");
    scanf("%d", &notas);

    float **mat = (float **)malloc(alunos * sizeof(float *));
    for(i = 0; i < alunos; i++){
        mat[i] = (float *)malloc(notas * sizeof(float));
    }

    preencher(mat, alunos, notas);

    for(i = 0; i < alunos; i++){
        mat[i] = (float *)realloc(mat[i], (notas + 1) * sizeof(float));
    }

    media(mat, alunos, notas);
    tabela(mat, alunos, notas);

    return 0;
}