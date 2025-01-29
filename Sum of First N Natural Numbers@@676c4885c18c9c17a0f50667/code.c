#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int sum = 0;
    int n ;
    int i =1;
    scanf("%d",&n);

    for (i=1; i>=n; i++){
        sum = sum+i;
        printf("%d",sum);
}

      

    return 0;
}