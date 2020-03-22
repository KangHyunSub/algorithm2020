#include<stdio.h>
int main(){
    int a, i;
    int sum=0;
    scanf("%d", &a);
    for(i=0; i<a; i++){
        sum = sum + i+1;
    }
    printf("%d", sum);
    return 0;
}