#include <stdio.h>

int main() {
    char op ;
    int a ;
    int b;
    scanf("%c%d%d",&op,&a,&b);
  

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