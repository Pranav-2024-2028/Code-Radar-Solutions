#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

   
    scanf("%s", str1);

    
    scanf("%s", str2);

    // Concatenate str2 to str1
    strcat(str1, str2);

    printf(" %s", str1);

    return 0;
}
