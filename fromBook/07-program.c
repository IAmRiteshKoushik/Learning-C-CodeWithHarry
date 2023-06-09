#include<stdio.h>

int main(){
    int train = 37, winnings = 0;
    switch(train){
        case 37:
            winnings = winnings + 50;
            printf("%d\n", winnings);
        case 65:
            winnings = winnings + 80;
            printf("%d\n", winnings);
        case 12:
            winnings = winnings + 20;
            printf("%d\n", winnings);
        default:
            winnings = 0;
            printf("%d\n", winnings);
    }
    return(0);
}