// Your code here...
#include<stdio.h>
int main(){

    int n; 
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
  

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d ",min);
    printf("%d",max);
    return 0;
}