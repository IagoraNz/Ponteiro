#include <stdio.h>


int main (){
    int a = 3, b = 7, c = 3, *p1, *p2, *p3;

    p3 = &b; //p3 = 7
    p1 = p3; //p1 = 7
    p2 = p1; //p2 = 7

    a = a * b + *p1; //a = 3 * 7 + 7 = 28
    b = *p3 * a + *p1; //b = 7 * 28 + 7 = 203
    a++;  //a = 29;
    c = a + b; //29 + 203 = 232
    c++;  //c = 233

    printf("a = %d b = %d c = %d", a, b, c);//a = 19, b = 203, c = 233;
    printf("p1 = %d p2 = %d p3 = %d", *p1, *p2, *p3);//p1 = p2 = p3 = 203

    return 0;
}