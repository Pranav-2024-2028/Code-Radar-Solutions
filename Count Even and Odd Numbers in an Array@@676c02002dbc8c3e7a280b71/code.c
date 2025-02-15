#include <assert.h>

int main() {
    int n;
    scanf("%d", &n);
    
    assert(n >= 1 && n <= 1000); // Program will terminate if condition fails
    printf("Valid input: %d\n", n);
    
    return 0;
}
