#include<stdio.h>
int main(){
    int n;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&n);
    }
    int k;
    scanf("%d",&k);

    k = k % n;
    for(int i=0;i<n; i++){
        printf("%d ",arr[(i- k+n)%n]);
    }


    return 0;
}