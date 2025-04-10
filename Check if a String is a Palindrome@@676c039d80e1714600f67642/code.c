#include<stdio.h>
#include<string.h>
int main(){
    char arr[1000];
    char arr1[1000];
    char arr2[1000];
    


    fgets(arr, sizeof(arr),stdin);
    fgets(arr1, sizeof(arr1),stdin);
    fgets(arr2, sizeof(arr2),stdin);


    int length = strlen(arr)-1;
    int length1 = strlen(arr1)-1;
    int length2 = strlen(arr2)-1;

    for(int i=0; i<length; i++){
        arr1[i] = arr[i];
    }
    
    for(int i=length2; i>=0; i--){
        arr2[i] = arr[i];
    }

    if (arr1[i]==arr2[i])
{
printf("Yes");
}
   
    
}
