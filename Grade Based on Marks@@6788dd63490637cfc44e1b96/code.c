#include <stdio.h>

int main() {
    int marks;  // Declare a variable to store marks

    // Input the marks
    scanf("%d", &marks);

    // Determine and output the grade
    if (marks >= 90) {
        printf("A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}