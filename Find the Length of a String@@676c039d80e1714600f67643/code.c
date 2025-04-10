// Your code here...
#include<stdio.h>
#include<string.h>


int main(){
    char arr[1000];

    fgets(arr, sizeof(arr),stdin);

    int length = strlen(arr);

    printf("%d",length);

    return 0;
}
