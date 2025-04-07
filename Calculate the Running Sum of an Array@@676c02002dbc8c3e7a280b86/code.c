#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        printf("%d ", sum); // Print the running sum
    }

    return 0;
}