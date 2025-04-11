#include<stdio.h>
#include<string.h>
int main(){
    char arr[1000];
    char arr2[1000];

    fgets(arr, sizeof(arr),stdin);

    int length = strlen(arr)-1;
    int length2 = strlen(arr2)-1;

    int temp ;
    for(int i=0; i<length; i++){
        temp = arr[i];
    }

    for(int i=length2; i>=0; i--){
        arr2[i] = arr[i];
    }
    

    for(int i=0; i<length; i++){
        if (temp == arr[i]){
            printf("Yes");
            return 0;
        }
        else{
            printf("No");
            return 0;
        }
    }
}
