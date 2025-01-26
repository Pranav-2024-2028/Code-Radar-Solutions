#include <stdio.h>
char marks;
scanf("%c",&marks);


int main() {
    if (marks>=90){
        printf("A");
    }
    else if (makrs >=80 && marks<90){
        printf("B");
    }
    else if(marks>=70 && marks<80){
        printf("C");
    }
    else if(marks >=60 && marks<70){
        printf("D");

    }
    else{
        printf("F")
    }

    return 0;
}