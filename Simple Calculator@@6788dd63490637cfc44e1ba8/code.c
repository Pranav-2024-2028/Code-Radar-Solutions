#include <stdio.h>

int main() {
    char op ;
    int a ;
    int b;
    scanf("%c",&op);
    scanf("%d",&a);
    scanf("%d",&b);

    if (op =='+'){
        printf("%d",a+b);
    }
    else if(op =='-'){
        printf("%d",a-b);
    }
    else if(op == '*'){
        printf("%d",a*b);
    }
    else if (op =='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
   
    return 0;
}