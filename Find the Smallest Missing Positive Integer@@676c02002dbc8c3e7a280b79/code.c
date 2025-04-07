#include<stdio.h>
int main(){

`   int n;
    int sum =0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int sn = (n*(n+1)/2);
    
    for(int i =0; i<n; i++){
        sum = sum+srr[i];
    }
    printf("%d",sum-sn);


    return 0;
}