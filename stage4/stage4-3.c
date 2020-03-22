#include<stdio.h>
int main(){
    int a, n1, n2, sum, check = 0;
    scanf("%d", &a);
    n1 = a / 10;
    n2 = a % 10;
    sum = n1 + n2;
    n1 = n2;
    n2 = sum%10;
    check++;
    while((n1 != a/10) || (n2 != a%10)){
        sum = n1 + n2;
        n1 = n2;
        n2 = sum%10;
        check++;
    }
    printf("%d", check);
    return 0;
}