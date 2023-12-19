#include <stdio.h>
#include <stdlib.h>

void preencher(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void exibir(int *vet, int tam){
    int i;

    printf("\nVetor: ");
    for(i = 0; i < tam; i++){
        printf("%d ", *(vet + i));
    }
}

int adicionar(int *vet, int tam){
    vet = (int *)realloc(vet, tam++ * sizeof(int));

    printf("Digite o elemento a ser adicionado: ");
    scanf("%d", &vet[tam - 1]);

    exibir(vet, tam);
    return tam;
}

void remover(int *vet, int tam){
    int i, rem;

    printf("Digite o numero que deseja remover do vetor: ");
    scanf("%d", &rem);

    for(i = 0; i < tam; i++){
        if(vet[i] == rem){
            vet[i] = '\0';
        }
    }
    exibir(vet, tam);
}

void buscar(int *vet, int tam){
    int i, busc;

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &busc);

    for(i = 0; i < tam; i++){
        if(vet[i] == busc){
            printf("O valor da busca esta no vetor!\n");
            printf("Vetor[%d]: %d", i, vet[i]);
        }
    }
}

int main(){

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *)calloc(tam, sizeof(int)), opc;

    do{
        printf("\n_____ MENU ______\n");
        printf("1 - Preencher vetor\n");
        printf("2 - Exibir vetor\n");
        printf("3 - Adicionar elemento\n");
        printf("4 - Remover elemento\n");
        printf("5 - Buscar elemento\n");
        printf("6 - Sair\n");
        printf("Digite a opcao escolhida: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            preencher(vet, tam);
            system("PAUSE");
            system("cls");
            break;

        case 2:
            exibir(vet, tam);
            system("PAUSE");
            system("cls");
            break;

        case 3:
            tam = adicionar(vet, tam);
            system("PAUSE");
            system("cls");
            break;

        case 4:
            remover(vet, tam);
            system("PAUSE");
            system("cls");
            break;

        case 5:
            buscar(vet, tam);
            system("PAUSE");
            system("cls");
            break;

        default:
            printf("Saindo da aplicacao!...");
            break;
        }
    }while(opc != 6);

    free(vet);

    return 0;
}