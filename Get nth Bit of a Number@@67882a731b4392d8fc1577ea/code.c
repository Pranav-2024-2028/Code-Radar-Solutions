// Your code here...
#include<stdio.h>
int main(){
    int num1;
    int num2;
    scanf("%d %d ", &num1 , &num2);

    int c = (num2>>num1) &1;
    printf("%d",c);

    return 0;
}