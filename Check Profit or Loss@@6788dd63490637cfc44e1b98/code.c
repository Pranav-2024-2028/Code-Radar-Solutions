#include <stdio.h>
int main() {
    int buy ;
    int sell;
    scanf("%d%d",&buy,&sell);

    if (buy>sell){
        printf("Loss");
    }
    else if (sell>buy){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
   
    return 0;
}