#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);
    if(ch == 'A'){
        printf("Excellent");
    }
    else if(ch == 'B'){
        printtf("Good");
    }
    else if(ch =='C'){
        printf("Average");
    }
    else if (ch =='D'){
        pritnf("Below Average");
    }
    else if (ch=='F'){
        printf("Fail");
    }
    else{
        pritnf("Invalid grade");
    }
   
    return 0;
}