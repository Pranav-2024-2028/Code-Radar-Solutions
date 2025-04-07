#include<stdio.h>
int main(){
    int n;
    int temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=n-1; i>=0; i--){
       temp = arr[i];
    }
     for(int i=0; i<n; i++){
        if(arr[i] == temp){
            printf("YES");
            break;
        }
        else{
            printf("NO");  
             
        }
    }

}