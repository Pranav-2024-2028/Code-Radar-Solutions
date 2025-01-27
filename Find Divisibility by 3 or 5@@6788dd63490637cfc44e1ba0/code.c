#include <stdio.h>
int main(){
    int num;
    scanf("%d" ,&num);

    if(num%5){
        printf("Divisible by 5");
    }
    else if (num % 3){
        printf("Divisible by 3");
    }
    else if(num % 3 && num % 5){
        printf("Divisible by Both");
    }
    else{
        printf("Not Divisible");
    }


    return 0;
}