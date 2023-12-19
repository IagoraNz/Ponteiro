#include <stdio.h>

int main(){
    
    int a = 3, b = 1, *p1, *p2;

    p1 = &a;//p1 = 3
    p2 = p1;//p2 = p1 = 3

    *p1 = (a * a) + (*p2)++; //p1 = 9 + 4 = 13 e p2 = 13

    a = 3 * b; //3. Logo p1 passa a ser 3 e p2 = 3

    *p2 = *p1 + 1;

    printf("%d %d\n", a, b);//a = 4 e b = 1
    printf("%d %d\n", *p1, *p2);//p1 = 4 e p2 = 4

    return 0;
}