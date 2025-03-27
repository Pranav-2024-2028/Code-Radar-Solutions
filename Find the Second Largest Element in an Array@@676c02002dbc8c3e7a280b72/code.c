// Your code here..
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max = -2147483648;
    int max2 = -2147483648;

    for(int i = 0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if (max2<arr[i] && max>arr[i]){
            max2 = arr[i];
        }
    }
]
    printf("%d",max2);


    return 0;
}