#include<stdio.h>
int main(){

   int n;
    int sum =0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int sn = (n*(n+1)/2);
    
    for(int i =0; i<n; i++){
        sum = sum+arr[i];
    }
    printf("%d",sn-sum);


    return 0;
}