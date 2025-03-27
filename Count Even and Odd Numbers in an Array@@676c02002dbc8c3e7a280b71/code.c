#include<stdio.h>
int main(){

    int n; 
    int count =0; 
    int count1 = 0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("%d ",count);
    printf("%d",count1);

    return 0;
}