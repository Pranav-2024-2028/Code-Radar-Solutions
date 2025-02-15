// Your code here...
#include<stdio.h>
int main(){

    int a;
    int b;
    scanf("%d%d",&a,&b);

    a= a^b;
    b = a^b;
    a = a^b;

    printf("%d\n",a);
    printf("%d\n",b);
    return 0;

}