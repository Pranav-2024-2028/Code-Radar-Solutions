// Your code here...
#include<stdio.h>
#include<string.h>


int main(){
    char arr[1000];

    fgets(arr, sizeof(arr),stdin);

    int length = strlen(arr);

    if (length == ''){
        printf("%d",0);
    }
    
    else{
    printf("%d",length);
    }
    return 0;
}
