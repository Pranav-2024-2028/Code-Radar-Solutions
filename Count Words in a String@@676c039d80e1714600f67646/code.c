#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

  
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    int count = 1;  // Start at 1, assuming the string has at least one word

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}

