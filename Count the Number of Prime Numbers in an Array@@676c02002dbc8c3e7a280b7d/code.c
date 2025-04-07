#include<stdio.h>

int main() {
    int n;
    int count=0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

      // Last element of the array

    for(int i = 0; i < n; i++) {   
        if(n%i==0){
            count ++;
        }
    }
    printf("%d",count);

    return 0;
}
