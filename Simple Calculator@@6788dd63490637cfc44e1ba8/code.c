#include <stdio.h>

int main() {
    int a ;
    int b;
    char ch;
    scanf("%d%d %c",&a,&b, &ch);

    if (ch == '+'){
        printf("%d",a+b);
    }
    else if  (ch == '-'){
        printf("%d",a-b);
    }
    else if(ch == '*'){
        printf("%d",a*b);
    }
    else if (ch == '/'){
        if (b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
        
    }
    else{
        printf("error");
    }
    
    return 0;
}