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
        if(n % i == 0){
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

