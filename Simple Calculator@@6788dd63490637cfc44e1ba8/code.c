#include <stdio.h>

int main() {
    char op ;
    int a ;
    int b;
    scanf("%c",&op);
    scanf("%d",&a);
    scanf("%d",&b);

    if (op =="+"){
        printf(a+b);
    }
    else if(op =="-"){
        printf(a-b);
    }
    else if(op == "*"){
        printf(a*b);
    }
    else{
        printf(a/b);
    }
   
    return 0;
}