#include <stdio.h>

int main() {
    
    int a ;
    int b;
    char op;
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