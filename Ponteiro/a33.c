#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bhaskara(int *a, int *b, int *c);

int main(){

    int a, b, c;

    printf("Digite a expressao ax2 + bx + c: ");

    printf("\nDigite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    bhaskara(&a, &b, &c);

    return 0;
}

void bhaskara(int *a, int *b, int *c){
    float x1, x2;
    int delta;

    delta = (*b * *b) - 4 * *a * *c;

    x1 = (-(*b) + sqrt(delta)) / (2 * *a);

    x2 = (-(*b) - sqrt(delta)) / (2 * *a);

    printf("\nOs valores de delta, x1, x2: %d %.0f %.0f ", delta, x1, x2); 
}