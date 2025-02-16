#include<stdio.h>
#include <ctype.h>
int main(){
    char ch;

    scanf("%d",&ch);

    if (ch == 'A'||ch=='E'||ch=="I"||ch=="O"||ch =='U'||ch == 'a'||ch=='e'||ch=="i"||ch=="o"||ch =='u'){
        printf("Vowel");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else if(ischar(ch)){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }



    return 0;
}