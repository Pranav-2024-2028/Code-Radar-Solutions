#include <stdio.h>

int main() {
    char op ;
    int a ;
    int b;
    scanf("%d%d%op",&a,&b,&c);
  

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