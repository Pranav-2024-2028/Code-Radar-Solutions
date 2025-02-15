#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w"); // Open file for writing
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    fprintf(file, "Input values: a = %d, b = %d\n", a, b);
    fprintf(file, "Sum: %d\n", a + b);
    
    fclose(file); // Close file
    return 0;
}
