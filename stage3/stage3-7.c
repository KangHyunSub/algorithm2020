#include<stdio.h>
int main(){
    int a, i, n1, n2;
    scanf("%d", &a);
    for(i=0; i<a; i++){
        scanf("%d %d", &n1, &n2);
        printf("Case #%d: %d\n", i+1, n1+n2);
    }
    return 0;
}