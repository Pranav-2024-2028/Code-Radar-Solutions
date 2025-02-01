#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    int age;
    char hobby;
    scanf("%s%d%s",&n , &age , &hobby);

    printf("%s Name:",n);
    printf("%d Age:",age);
    printf("%s Painting:",hobby);
    return 0;
}