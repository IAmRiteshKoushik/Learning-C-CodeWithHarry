#include<stdio.h>

int main(){
    // calculate the sum of the numbers occuring in the multiplication 
    // table of 8
    int sum1 = 0, i = 1;

    for (i; i < 11; i++) {
        sum1 += i * 8;
        printf("Current value of the sum variable is %d after adding %d\n", sum1, i * 8);
    }
    return(0);
}