#include <stdio.h>
int main() {
    char ch ;
    scanf("%c",&ch);
    char vowels = 'aeiou';

    if (ch == vowels){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
   
    return 0;
}