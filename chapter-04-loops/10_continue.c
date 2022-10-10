#include<stdio.h>

int main(){

    // Continue statement is used to immediately move
    // to the next iteration of the loop
    // It can be used to "skip" the steps of a 
    // particular iteration

    int skip = 5;
    int i = 0;

    while (i < 10)
    {
        i++;
        if (i != skip) {
            continue;
        } else
        {
            printf("%d\n", i);
        }
    }
    return(0);
}