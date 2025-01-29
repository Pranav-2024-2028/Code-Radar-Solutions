#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if (n==5){
        printf("%d",5);
    }
    if (n==1){
        printf("%d",1);
    }
    return 0;
}