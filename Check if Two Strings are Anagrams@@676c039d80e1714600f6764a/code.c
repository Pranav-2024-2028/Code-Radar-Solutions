#include<stdio.h>
#include<string.h>

int main(){
    char arr1[1000];
    char arr2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    fgets(arr1, sizeof(arr1),stdin);
    fgets(arr2, sizeof(arr2),stdin);

    int length1 = strlen(arr1)-1  ;
    int length2 = strlen(arr2)-1 ;

    if (length1 != length2){
        printf("No\n");
        return 0;
    }
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Yes\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
    
