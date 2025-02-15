// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    fprintf(stderr, "Debug: a = %d, b = %d\n", a, b); // Prints even if stdout is blocked
    printf("%d\n", a + b);
    
    return 0;
}
