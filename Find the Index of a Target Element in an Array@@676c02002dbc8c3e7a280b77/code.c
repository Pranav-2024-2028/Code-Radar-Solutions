// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=1;i<n; i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);

    for(int i=0; i<n; i++){
        if(t == arr[i]){
            printf("%d",arr[i]);
        }
    }
    return 0;
}