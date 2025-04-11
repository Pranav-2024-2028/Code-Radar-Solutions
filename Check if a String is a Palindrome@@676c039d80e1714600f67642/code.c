#include<stdio.h>
#include<string.h>
int main(){
    char arr[1000];
    char arr2[1000];

    fgets(arr, sizeof(arr),stdin);

    int length = strlen(arr)-1;
    int length2 = strlen(arr2)-1;

    for(int i =0; i<length2; i++){
        int temp = arr[i];
    }
    
    for(int i=length; i>=0; i--){
        arr[i] = arr[2];
    }
    

    for(int i=0; i<length; i++){
        if (arr[i] == temp){
            printf("Yes");
            return 0;
        }
        else{
            printf("No");
            return 0;
        }
    }
}
