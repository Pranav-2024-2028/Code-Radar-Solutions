
#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] <= 1) continue;

        for (j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0)
                break;
        }
        if (j == arr[i])
            count++;
    }

    printf("%d\n", count);
    return 0;
}



