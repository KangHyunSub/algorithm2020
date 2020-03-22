#include<stdio.h>
int main(){
    int n1=1, n2=1;
    int check = 1;
    scanf("%d %d", &n1, &n2);
    if((n1 == 0) && (n2 == 0)){
        check = 0;
    }
    while(check != 0){
        printf("%d\n", n1+n2);
        scanf("%d %d", &n1, &n2);
        if((n1 == 0) && (n2 == 0)){
            check = 0;
        }
    }
}