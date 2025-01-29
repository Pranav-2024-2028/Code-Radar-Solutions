#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int sum = 0;
    int N ;
    scanf("%d",&N);

    for (i=1; i<=N; i++){
        sum = sum+i;
    }
    printf("%d",sum);

    return 0;
}