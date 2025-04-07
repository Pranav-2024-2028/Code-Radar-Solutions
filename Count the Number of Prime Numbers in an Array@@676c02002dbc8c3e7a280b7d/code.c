#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

      // Last element of the array

    for(int i = 1; i <= n; i++) {  // Start from 1 to avoid division by 0
        if (target % i == 0) {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}
