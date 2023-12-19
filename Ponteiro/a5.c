#include <stdio.h>
#include <stdlib.h>

//Vetor com ponteiro para realizar operações aritméticas envolvendo todos os elementos do vetor

void matematica(int *vet, int tam){
    int i, op, soma = 0, subt = 0, mult = 1;
    float div = 1;

    do{
        printf("\nDigite a operacao desejada (1 para soma, 2 para subtracao, 3 para multiplicacao e 4 para divisao): ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            for(i = 0; i < tam; i++){
                soma += *(vet + i);
            }
            printf("\nA soma de todos os elementos: %d", soma);
            break;

        case 2:
            for(i = 0; i < tam; i++){
                subt -= *(vet + i);
            }
            printf("\nA subtracao de todos os elementos: %d", subt);
            break;
        
        case 3:
            for(i = 0; i < tam; i++){
                mult *= *(vet + i);
            }
            printf("\nA multiplicacao de todos os elementos: %d", mult);
            break;

        case 4:
            for(i = 0; i < tam; i++){
                div /= *(vet + i);
            }
            printf("\nA divisao de todos os elementos: %.2f", div);
            break;

        default:
            printf("Opcao invalida\n");
            break;
        }
    }while(op != 4);
}

void preencher(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &*(vet + i));
    }

    printf("Vetor: \n");
    for(i = 0; i < tam; i++){
        printf("%d ", *(vet + i));
    }
}

int main(){
    
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *)malloc(tam * sizeof(int));

    preencher(vet, tam);
    matematica(vet, tam);

    return 0;
}