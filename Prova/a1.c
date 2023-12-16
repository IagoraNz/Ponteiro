#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 0, b = 0, *p1, *p2;

    a = 2;
    b = 2;

    p1 = &a;
    p2 = p1;

    printf("%d %d\n", *p1, *p2); //p1 = 2 e p2 = 2
    printf("%d %d\n\n", a, b); // a = 2 e b = 2

    *p2 = *p1 + 3; //p2 = 2 + 3 = 5, como p1 = p2, p1 = 5

    printf("%d %d\n", *p1, *p2); //p1 = 5 e p2 = 5
    printf("%d %d\n\n", a, b); //a = 5 e b = 2. Como p1 manipula a, a recebe p1
    //Logo a = p1 e a = 5. B ainda não foi manipulado

    b = b * (*p1); //b = 2 * 5 = 10

    printf("%d %d\n", *p1, *p2); //p1 = 5 e p2 = 5
    printf("%d %d\n\n", a, b); // a = 5 e b = 10

    (*p2)++; //p2 = 6, p1 = p2 = 6, a = p1 = 6

    printf("%d %d\n", *p1, *p2); //p1 = 6 e p2 = 6
    printf("%d %d\n\n", a, b);//a = 6 e b = 10

    p1 = &b; //p1 passa a ser o valor de b. Portanto:

    printf("%d %d\n", *p1, *p2); //p1 = 10 e p2 = 6
    printf("%d %d\n", a, b); //a = 6 e b = 10

    return 0;
}