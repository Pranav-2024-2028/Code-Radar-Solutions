// Your code here..
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max = -999999999;
    int max2 = -99999999;

    for(int i = 0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if (max2<arr[i] && max>arr[i]){
            max2 = arr[i];
        }
        else{
            printf("-1");
        }
    }
    

    printf("%d",max2);


    return 0;
}