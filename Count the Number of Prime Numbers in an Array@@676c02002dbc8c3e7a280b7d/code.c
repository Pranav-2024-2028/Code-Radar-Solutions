#include <stdio.h>

int main() {
    int n, i, j, count = 0, flag;
    
    scanf("%d", &n);

    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   

        
        for (j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                flag = 0;
                break;
            }
        
        if (flag == 1)
            count++;
    }

    printf("%d", count);
    return 0;
}


