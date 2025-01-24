#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float avg ;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f" ,&c);

    avg = (a+b+c)/3;
    printf("Average: %f" , avg);

    return 0;
}