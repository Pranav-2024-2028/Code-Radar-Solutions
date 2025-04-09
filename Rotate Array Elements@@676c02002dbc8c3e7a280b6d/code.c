#include<stdio.h>
int n ;
scanf("%d",&n);
int arr[n];
int k;
scanf("%d",&k);
k = k %n;
for(int i=0; i<n; i++){
    printf("%d",arr[(i- k + n)%n]);
}