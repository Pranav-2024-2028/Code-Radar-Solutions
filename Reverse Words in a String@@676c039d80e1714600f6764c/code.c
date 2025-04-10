#include<stdio.h>
#include<string.h>

int main(){
    char arr[1000];

    fgets(arr, sizeof(arr), stdin);

    int len = strlen(arr)-1;
    for(int i=len; i>=0; i--){
        printf("%c",arr[i]);
    }
}