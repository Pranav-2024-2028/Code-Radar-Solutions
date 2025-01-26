#include <stdio.h>
int marks;
scanf("%d",&marks);


int main() {
    if (marks>=90){
        printf("A");
    }
    else if (makrs >=80 && <90){
        printf("B");
    }
    else if(marks>=70 && <80){
        printf("C");
    }
    else if(marks >=60 && <70){
        printf("D");

    }
    else{
        printf("F");
    }

    return 0;
}