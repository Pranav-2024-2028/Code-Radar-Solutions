// Your code here...
#include<stdio.h>
int main(){

    int n ;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if (n%i==0){
            printf("%d",i);
            return 0;
        }
       
    }


    return 0;
}