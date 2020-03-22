#include<stdio.h>
int main(){
    int a, i, n, n1;
    scanf("%d %d", &a, &n);
    for(i=0; i<a; i++){
        scanf("%d", &n1);
        getchar();
        if(n1 < n){
            printf("%d ", n1);
        }
    }
    return 0;
}