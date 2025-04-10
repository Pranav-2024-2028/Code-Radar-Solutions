#include<stdio.h>
#include<string.h>
int main(){

    int arr[1000];
    fgets(arr, sizeof(arr),stdin);

    int length = strlen(str) -1;

    for(int i = length; i>=0; i--){
        printf("%d",arr[i]);
    }
}