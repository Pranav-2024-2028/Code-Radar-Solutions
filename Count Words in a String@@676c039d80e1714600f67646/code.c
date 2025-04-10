#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

   
    fgets(str,sizeof(str),stdin); 
    int length = strlen(str)-1;  
    int count = 1 ; 

    for(int i=0; i<length; i++){
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0'){
            count ++;
        }
    }
    printf("%d",count);
}


