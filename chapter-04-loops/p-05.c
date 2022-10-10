#include<stdio.h>

int main(){
    int sum = 0, i = 1;
    while (i < 11) {
        sum += i;
        printf("Value of current sum variable %d after adding %d\n ", sum, i);
        i++;

    }
    return(0);
}