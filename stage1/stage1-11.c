#include<stdio.h>

int main(){
    int a, b;
    int b1, b2, b3;
    int n1, n2, n3, n4;
    scanf("%d", &a);
    scanf("%d", &b);
    b1 = b / 100;
    b2 = (b-(b1*100)) / 10;
    b3 = b % 10;
    n1 = a * b3;
    n2 = a * b2;
    n3 = a * b1;
    n4 = a * b;
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    printf("%d\n", n4);
    return 0;
}