#include <stdio.h>


int main() {
    int sum = 0;
    int N ;
    scanf("%d",&N);

    for (i=1; i<=N; i++){
        sum += i;
    }
    printf("%d",sum);

    return 0;
}