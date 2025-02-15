// Your code here...
#include<stdio.h>
int main(){

    int a;
    int b;
    scanf("%d%d",&a,&b);

    a= a^b;
    b = a^b;
    c = a^b;

    printf("%d",a);
    printf("%d",b);
    return 0;

}