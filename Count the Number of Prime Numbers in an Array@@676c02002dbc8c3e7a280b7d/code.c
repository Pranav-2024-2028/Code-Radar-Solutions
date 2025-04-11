#include<stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count how many numbers from 1 to n-1 divide n exactly
    for(int i = 1; i < n; i++) {   
        if(arr[i] % i == 0 ){
            count++;
            return 0;
            
        }
    }
    // if (count ==2){
        printf("%d",count);
    // }

  
    return 0;
}

