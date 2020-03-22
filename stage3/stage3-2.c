#include<stdio.h>
int main(){
    int a,i;
    int arr[100][2];

    scanf("%d", &a);
    for(i=0; i<a; i++){
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    for(i=0; i<a; i++){
        printf("%d\n", arr[i][0] + arr[i][1]);
    }
    return 0;
}