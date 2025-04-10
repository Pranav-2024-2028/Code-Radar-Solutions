#include <stdio.h>

int main() {
    char arr[1000];
    int length = 0;

    fgets(arr, sizeof(arr), stdin);

    // Count characters manually until newline or null terminator
    for (int i = 0; arr[i] != '\0' && arr[i] != '\n'; i++) {
        length++;
    }

    printf("%d", length);
    return 0;
}
